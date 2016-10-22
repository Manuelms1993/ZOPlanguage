
%{
#include "sin.tab.h"
#include "symtable.h"
#include "stdio.h"
int numlin = 1;


%}
str	[^\"]
letter	[a-zA-Z]
alphanum [a-zA-Z0-9_]

%%
"//".*
\t  {}
" " {}
"(" {return PARL;}
")" {return PARR;}
"[" {return CORL;}
"]" {return CORR;}
"{" {return KEYL;}
"}" {return KEYR;}
\n {numlin++;}
";" {return POINTCOMMA;}
":" {return FUNTYPE;}
"," {return COMMA;}
"I"	{strcpy(yylval.string, yytext); return INT;}
"F"	{strcpy(yylval.string, yytext); return FLOAT;}
"if"    {return IF;}
"else" {return ELSE;}
"#" {return FUNC;}
"loop" {return LOOP;}
"ZOP" {return MAIN;}
"return" {return RETURN;}
"break" {return BREAK;}
"continue" {return CONTINUE;}
"print"    {return PRINT;}
"true" {strcpy(yylval.string, yytext); return TRUE;}
"false" {strcpy(yylval.string, yytext); return FALSE;}
"+=" {strcpy(yylval.string, yytext); return OP_ASSIGN;}
"-=" {strcpy(yylval.string, yytext); return OP_ASSIGN;}
"*=" {strcpy(yylval.string, yytext); return OP_ASSIGN;}
"/=" {strcpy(yylval.string, yytext); return OP_ASSIGN;}
"+" {strcpy(yylval.string, yytext); return OP_ARI;}
"-" {strcpy(yylval.string, yytext); return OP_ARI;}
"*" {strcpy(yylval.string, yytext); return OP_ARI;}
"/" {strcpy(yylval.string, yytext); return OP_ARI;}
">=" {strcpy(yylval.string, yytext); return OP_BIN;}
"<=" {strcpy(yylval.string, yytext); return OP_BIN;}
"<" {strcpy(yylval.string, yytext); return OP_BIN;}
">" {strcpy(yylval.string, yytext); return OP_BIN;}
"==" {strcpy(yylval.string, yytext); return OP_BIN;}
"=" {strcpy(yylval.string, yytext); return EQUAL;}
([0-9])+"."([0-9])* {strcpy(yylval.string, yytext); return FLOATNUM;}
([0-9])* {strcpy(yylval.string, yytext); return NUM;}
{letter}{alphanum}* {strcpy(yylval.string, yytext); return NAME;}
"\""{str}+"\"" {strcpy(yylval.string, yytext); return STRING;}
%%





