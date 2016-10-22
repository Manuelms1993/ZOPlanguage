#include "symtable.h"

#include <cstdio>
#include <cassert>
#include <cstring>

#include <iostream>
using namespace std;

#define PREFIX_IMPLICIT "0sys_"
char letters[24] = {'a','b','c','d','e','f','g','h','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z'};
int letter = -1;

symtable::symtable() {
    sysVarCount = 0;
    currentScope = 0;
}

int symtable::getHash(string name) {
    int hash = 0;
    for (unsigned int i = 0; i < name.size(); i++)
		hash = hash + name[i];
    return hash % SYMTBLSIZE;
}

symrec * symtable::insertVar(string name, vartype typeVar, int amb, int mem){
    symrec *returnValue = NULL;
    if (existSymbol(name) && (scope() == scopeSymbol(name)) ) {							       
        string msg = "The symbol \"" + name + "\" already exist";
        cout << msg << endl;
    }else{
        symrec symbol;
        symbol.name = name;
        symbol.typesim = VAR;
        symbol.typeVar = typeVar;
        symbol.scope = currentScope + amb;
		symbol.memory = mem;
        table[getHash(name)].push_back(symbol);
        returnValue = &table[getHash(name)].back();
    }
    
    if (DEBUGGING) printState();
    return returnValue;
}

symrec * symtable::insertFun(string name, vartype typeVar, int mem, int label, int nParam){
    symrec * returnValue = NULL;
	if (existSymbol(name)) {								       
		    string msg = "The symbol \"" + name + "\" already exist";
		    cout << msg << endl;
	}else{
		symrec symbol;
		symbol.name = name;
		symbol.typesim = FUN;
		symbol.typeVar = typeVar;
		symbol.scope = currentScope;
		symbol.memory = mem;
		symbol.label = label;
		symbol.nParam = nParam;
		table[getHash(name)].push_back(symbol);
		returnValue = &table[getHash(name)].back(); 
	}

    if (DEBUGGING) printState();
    return returnValue;
}

void symtable::newScope() {
    currentScope += 1;
}

void symtable::endScope() {

	list<symrec>::reverse_iterator s;
	for (int i=0; i < SYMTBLSIZE; i++){
		for (s = table[i].rbegin(); s != table[i].rend(); ++s) {
		   if ( s->scope == currentScope && s->scope != 0){
			table[i].pop_back();
			s--;
		    }
		}
	}
    currentScope -= 1;
    if (DEBUGGING) printState();
}

bool symtable::existSymbol(string name) {
    int i = getHash(name);
    
    if ( table[i].empty() )
        return false;
    
    list<symrec>::reverse_iterator s;
    for (s = table[i].rbegin(); s != table[i].rend(); ++s) {
        if (s->name == name)
            return true;
    }
    return false;
}

symrec * symtable::getSymbol(string name) {
    int i = getHash(name);
    if ( table[i].empty() )
        return NULL;
    symrec *returnValue = NULL;
    returnValue = &table[getHash(name)].back();
    return returnValue;
}

int symtable::scopeSymbol(string name) {
    int i = getHash(name);
    
    list<symrec>::reverse_iterator s;
    for (s = table[i].rbegin(); s != table[i].rend(); ++s) {
        if (s->name == name)
            return s->scope;
    }
    return -1;
}

void symtable::printState(){
	cout << endl;
	cout << "---------------------" << endl;
    cout << "---  State table  ---" << endl;
	cout << endl;
    list<symrec>::iterator s;
    int i;
 
    for (i=0; i<SYMTBLSIZE; ++i){
        for (s = table[i].begin(); s != table[i].end(); ++s){
            printSymbol(&(*s));
        }
    }

	cout << endl;    
    cout << "---  End table  ---" << endl;
	cout << "---------------------" << endl;
	cout << endl;
	letter = -1;
}

void symtable::printSymbol(symrec * s){
    string nom_type[2];
    nom_type[_INT] = "I";
    nom_type[_FLOAT] = "F"; 
    
    if (0 == s->scope){letter++; }

    for (int e=0; e < s->scope; e++) 
		cout << "  ";
    cout << s->scope << " ~~> ";

	if (s->typesim == FUN){ 
		cout << s->name << "()";
		cout << endl;
		return;
	}

    if (s->typesim == VAR){
		cout << nom_type[s->typeVar] << " ";
		cout << s->name << ", MemPos = " << s->memory <<" " << endl;
		return;
	}
	cout << endl;
   	
}

