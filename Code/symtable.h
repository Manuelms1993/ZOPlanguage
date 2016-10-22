#ifndef SYMTABLE_H
#define SYMTABLE_H

#include <string>
#include <list>
using namespace std;

#define SYMTBLSIZE 1000000
#define D_BISON
#define DEBUGGING false

enum symtype{ VAR,FUN };

enum vartype{ _INT , _FLOAT};

struct symrec {
    string name;   
    symtype typesim;                    
    vartype typeVar; 
    string nametype;
	int memory;
	int label;
	int nParam;
    int scope; 
};

class symtable{
    list<symrec> table[SYMTBLSIZE];    
    int sysVarCount;    
    public: int currentScope;    
    string nameSimParams;
    symrec *EnumParent;
    bool insertParams;
    list<symrec>::iterator sigParam;
    
public:
    int getHash(string);	
    symtable();    
    string generanameVar(); 
    symrec * insertVar(string name, vartype typeVar, int amb, int mem);    
    symrec * insertFun(string name, vartype typeVar, int mem, int label, int nParam);    
    void newScope();
    void endScope(); 
    bool existSymbol(string name);
	symrec * getSymbol(string name);
    bool checkEnum (string variable, string campo);      
    const list<symrec> * const tableHash() { return table; }; 
	int scope() { return currentScope; }; 
	int scopeSymbol(string name); 
	void printState();
	void printSymbol(symrec * s);
};


#endif
