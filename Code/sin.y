%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "symtable.h"
#include "codeGenerationQ.h"

#include <cmath>
#include <cstdio>
#include <cassert>
#include <cstring>

extern FILE *yyin;
extern int numlin;
int yydebug=1;
void yyerror(const char* mens);

extern "C++" {int yylex(void);}
vartype type;
 
qMachine Q;
FILE* fout;

int trace = 0;
symtable table;
void yyerror (char *s);

int typeConst = -1;

int nFunction = 0;
int addressReturn = 0;
char *typeFunction;
int funExp = 0;

int callAddress = 0;
int callType = 0;
string callName;
symrec *currentCall = NULL;

int loopStart[100];
int loopEnd[100];
int loopIndex=0;

int ifStart[100];
int ifEnd[100];
int ifIndex=0;

int nParam = 0;

%}

%union {
	int integer; 
	char op;
	char string[50];
}

%error-verbose
%token PARL
%token PARR
%token CORL
%token CORR
%token KEYL
%token KEYR
%token INT
%token FLOAT
%token IF 
%token ELSE 
%token FUNC 
%token LOOP 
%token MAIN 
%token RETURN 
%token BREAK 
%token CONTINUE 
%token PRINT
%token TRUE 
%token FALSE 
%left OP_ARI 
%left EQUAL
%left OP_BIN
%token FLOATNUM
%token NUM
%token OP_ASSIGN
%token STRING
%token POINTCOMMA
%token FUNTYPE
%token NAME
%token COMMA
%left OP_SUB
%%

program : {generateCodeStart(fout, &Q);} var_global {fprintf(fout,"\tGT(1);\t\t\t//To Main\n");} otherFunc main_function {generateCodeEnd(fout);};

otherFunc : otherFunc function {if (trace) printf("%d :: <otherFunc> otherFunc function \n",numlin);} | ;

var_global : | init POINTCOMMA var_global;

main_function : FUNC MAIN {generateCodeMain(fout, &Q, nFunction); table.insertFun("ZOP", type, 0, 0, 0);} PARL PARR  {if (trace) printf("%d :: <main_function>  FUN MAIN PARL PARR block \n",numlin);} {table.newScope();} block {table.endScope();};

function : FUNC NAME FUNTYPE var {nFunction++; typeFunction = $<string>4;} PARL args PARR {int *r = generateCodeFunction(fout, &Q, nParam); addressReturn = r[0];  table.insertFun($<string>2, type, r[0], r[1], nParam); releaseR(fout, &Q); if (trace) printf("%d :: <function>  FUN NAME PARL args PARR block \n",numlin);} {table.newScope();} block {table.endScope();fprintf(fout,"\tGT(R5);\t\t\t//End Function\n");resetZR6(&Q);};

block : KEYL { if (trace) printf("%d :: <block>  KEYL sentences KEYR \n",numlin);} sentences KEYR  | error;

sentences : sentences sentence | sentence;

args : {if (trace) printf("%d :: <args>  empty \n",numlin);} | var NAME {nParam++; table.insertVar($<string>2, type, 1, (nParam*4));} COMMA args {if (trace) printf("%d :: <args>  var NAME COMMA args \n",numlin);} | var NAME {nParam++; table.insertVar($<string>2, type, 1, (nParam*4));};

sentence : init POINTCOMMA | assign POINTCOMMA | if | loop | return | print | callFunction POINTCOMMA | break_continue;

init : var NAME {table.insertVar($<string>2, type, 0, assignMemoryVar(fout, &Q, $<string>1));} EQUAL expression 
{checkInit(&Q, $<string>1, numlin); generateCodeSave(fout,&Q, table.getSymbol($<string>2), $<string>4); if (trace) printf("%d :: <init>  var NAME POINTCOMMA  \n",numlin); resetCheckExpression(&Q);} | error; 

assign : NAME EQUAL expression {generateCodeSave(fout,&Q, table.getSymbol($<string>1), $<string>2); if (trace) printf("%d :: <assign> NAME EQUAL expression  \n",numlin); resetCheckExpression(&Q);} | NAME OP_ASSIGN expression {generateCodeSave(fout,&Q, table.getSymbol($<string>1), $<string>2); if (trace) printf("%d :: <assign> NAME OP_ASSIGN expression  \n",numlin); resetCheckExpression(&Q);};

if : 
IF expression_bin {int label = generatedCodeIf(fout, &Q); ifStart[ifIndex]=label-1; ifEnd[ifIndex]=label; ifIndex++;} 
{if (trace) printf("%d :: <if>  IF expression block else  \n",numlin);} {table.newScope();} 
block {generatedCodeCloseIf(fout , &Q, ifEnd[ifIndex-1]);} {table.endScope();} 
else;

else : {generatedCodeElse(fout , &Q, ifStart[ifIndex-1]);} {generatedCodeCloseElse(fout , &Q, ifEnd[ifIndex-1]); ifIndex--;}
| ELSE {generatedCodeElse(fout , &Q, ifStart[ifIndex-1]);} {if (trace) printf("%d :: <else>  ELSE block  \n",numlin);} {table.newScope();} block {table.endScope();} {generatedCodeCloseElse(fout , &Q, ifEnd[ifIndex-1]); ifIndex--;};

loop : 
LOOP 
init {int label = generatedCodeLoop(fout, &Q); loopStart[loopIndex]=label-1; loopEnd[loopIndex]=label; loopIndex++;} 
COMMA expression_bin { generatedCodeEvaluateLoop(fout , &Q, loopEnd[loopIndex-1] );} 
COMMA 
assign {if (trace) printf("%d :: <loop>  LOOP assign COMMA expression COMMA increment block_loop  \n",numlin); table.newScope();} 
block {table.endScope(); generatedCodeCloseLoop(fout , &Q, loopStart[loopIndex-1],loopEnd[loopIndex-1] ); loopIndex--;}   
| 
LOOP {int label = generatedCodeLoop(fout, &Q); loopStart[loopIndex]=label-1; loopEnd[loopIndex]=label; loopIndex++;} 
COMMA expression_bin { generatedCodeEvaluateLoop(fout , &Q, loopEnd[loopIndex-1] );} 
COMMA {if (trace) printf("%d :: <loop> LOOP COMMA expression OP_BIN expression COMMA increment block_loop  \n",numlin); table.newScope();} 
block {table.endScope(); generatedCodeCloseLoop(fout , &Q, loopStart[loopIndex-1],loopEnd[loopIndex-1] ); loopIndex--;} ;


break_continue :  
BREAK {if (loopIndex>0){generatedCodeBreakContinue(fout, &Q, loopEnd[loopIndex-1]); }} POINTCOMMA 
{if (trace) printf("%d :: <break> \n",numlin);} | 
CONTINUE {if (loopIndex>0){generatedCodeBreakContinue(fout, &Q, loopStart[loopIndex-1]); }} POINTCOMMA 
{if (trace) printf("%d :: <continue> \n",numlin);};

return : RETURN expression {generateCodeReturn(fout, &Q, addressReturn, typeFunction);} POINTCOMMA {if (trace) printf("%d :: <return> \n",numlin); resetCheckExpression(&Q);}; 

print : 
PRINT const POINTCOMMA 
{
	if(typeConst == 0){
		generateCodePrintInt(fout,&Q, atoi($<string>2));
	}else if(typeConst == 1){
		generateCodePrintFloat(fout,&Q, atof($<string>2));
	}else if(typeConst == 2){
		generateCodePrintStr(fout,&Q, $<string>2);
	}
	
	if (trace) printf("%d :: <print> \n",numlin);
}
| PRINT NAME POINTCOMMA
{symrec *a = table.getSymbol($<string>2); checkID(&Q, a, numlin); generateCodePrintVar(fout,&Q, a);};

expression: numeric {generateCodeConst(fout, &Q, $<string>1, typeConst);} | NAME {checkID(&Q, table.getSymbol($<string>1), numlin); checkExpression(&Q, table.getSymbol($<string>1)->typeVar, numlin); typeConst = table.getSymbol($<string>1)->typeVar; generateCodeVar(fout, &Q, table.getSymbol($<string>1));} | callFunction {generateCodeVar(fout, &Q, currentCall);} | expression OP_ARI expression {generateCodeExpressionAri(fout, &Q, $<string>2, typeConst);} | PARL expression OP_ARI expression PARR {generateCodeExpressionAri(fout, &Q, $<string>3, typeConst);};

expression_bin: TRUE {typeConst = 0; generateCodeBool(fout, &Q, 1);} | FALSE {typeConst = 0; generateCodeBool(fout, &Q, 0);} | numeric {generateCodeConst(fout, &Q, $<string>1, typeConst);} | NAME {generateCodeVar(fout, &Q, table.getSymbol($<string>1));} | callFunction {generateCodeVar(fout, &Q, currentCall);} | expression_bin OP_BIN expression_bin {generateCodeExpressionBin(fout, &Q, $<string>2, typeConst);} | PARL expression_bin OP_BIN expression_bin PARR {generateCodeExpressionBin(fout, &Q, $<string>3, typeConst);};

const : numeric | STRING {typeConst = 2;} | TRUE {typeConst = 2;} | FALSE {typeConst = 2;};
numeric : NUM {checkExpression(&Q, 0, numlin); typeConst = 0;} | FLOATNUM {checkExpression(&Q, 1, numlin); typeConst = 1;};

callFunction : NAME PARL param PARR 
{
	currentCall = table.getSymbol($<string>1);
	checkID(&Q, currentCall, numlin);
	generateCodeCallFunction(fout, &Q, currentCall);
	//restoreAllR(fout, &Q); 
 	if (trace) printf("%d :: <callFunction> \n",numlin);};

param : {if (trace) printf("%d :: <param> empty\n",numlin);} | expression COMMA param {if (trace) printf("%d :: <param> expression COMMA param \n",numlin);} | expression {if (trace) printf("%d :: <param> expression \n",numlin);};  

var : INT {type = _INT; if (trace) printf("%d :: <var> INT \n",numlin);}
	| FLOAT {type = _FLOAT; if (trace) printf("%d :: <var> FLOAT \n",numlin);};

%%

int main(int argc, char** argv) {
	fout = fopen("./codeQ.q.c", "w");
	if (argc>1) yyin=fopen(argv[1],"r");
	yyparse();
}
void yyerror(const char* mens) {
	printf("Error en linea %i: %s \n",numlin,mens);
}
