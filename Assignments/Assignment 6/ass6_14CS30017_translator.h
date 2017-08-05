#ifndef ASS6_14CS30017_TRANSLATOR_H
#define ASS6_14CS30017_TRANSLATOR_H

#include <bits/stdc++.h>

using namespace std;
#define SZ_CHAR  1
#define SZ_INT   4
#define SZ_DB    8
#define SZ_PTR   4
enum opcode {
//Binary Assignment Instruction
OP_PLUS = 1,
OP_MINUS,
OP_MULT,
OP_DIVIDE,
OP_MODULO,
OP_SHIFT_LEFT,
OP_SHIFT_RIGHT,
OP_XOR,
OP_AND,
OP_OR,
OP_LOGICAL_AND,
OP_LOGICAL_OR,
//Unary Assignment Instruction
OP_UNARY_MINUS,
OP_UNARY_PLUS,
OP_COMPLEMENT,
OP_NOT,
//Copy Assignment Instruction
OP_ASSIGN,
//Unconditional Jump
OP_GOTO,
//Conditional Jump
OP_IF_LESS,
OP_IF_GREATER,
OP_IF_LESS_OR_EQUAL,
OP_IF_GREATER_OR_EQUAL,
OP_IF_EQUAL,
OP_IF_NOT_EQUAL,
OP_IF_EXPRESSION,
OP_IF_NOT_EXPRESSION,
// hardware defined conversions 
OP_C2I,
OP_C2D,
OP_I2C,
OP_D2C,
OP_I2D,
OP_D2I,
//Procedure Call
OP_PARAM,
OP_CALL,
//Return Value
OP_RETURN, 
//Array Indexing Opcodes to be inserted
OP_ARRAY_INDEX_FROM,
OP_ARRAY_INDEX_TO,
//Address and Pointer Assignment Instructions
OP_REFERENCE,
OP_DEREFERENCE,
OP_POINTER_ASSIGNMENT,
OP_FUNC_BEG,
OP_FUNC_END
};

void get(string x); // test function
class symtype;
class exxp;
class quad;
class symdata;
class symval                            // used for storing the init_val
{
public:
    char cval;
    int ival;
    double dval;
    void* pval;

    void setval(int a) {
        cval = a;
        dval = a;
        ival = a;
    }
    void setval(char a) {
        cval = a;
        dval = a;
        ival = a;
    }
    void setval(double a) {
        cval = a;
        dval = a;
        ival = a;
    }
};
enum basic_type{                        // an enum of types
    none,
    typ_void,
    typ_bool,
    typ_char,
    typ_int,
    typ_double,
    typ_array,
    typ_pointer,
    typ_function
};
class quad{                                                                     // a quad contains all the info like opcode and arguments
public:
    opcode op;
    string arg1, arg2, result;
    void print();                                                            // and also a customised print functions for printing the quad array
};
class q_array{
    
public:
    vector<quad> array;                                                           // Quad array is maintained as a vector of quads
    int nextinstr;                                                                // this points to the next index, incremented every time emit is called.
    q_array()
    {
        nextinstr = 0;
    }
    void emit(string res, string arg1, opcode op, string arg2 = "");
    void backpatch(list<int> a, int index);
    void emit(string res, int constant, opcode unary_op);
    void emit(string res, double constant, opcode unary_op);
    void emit(string res, char constant, opcode unary_op);
    void convInt2Bool(exxp* res);                                                 // a function to simplify convert from int to bool 
    // void conv2type(exxp*t, exxp*res, basic_type b_type);                          // two similar functions for simplifying the type conversion
    // void conv2type(string t,basic_type bt, string f, basic_type from);
};
class symtype
{
public:
    basic_type b_type;
    vector<int> alist;
    int pc;
    basic_type base_t;
};


class exxp{                                                     // class for storing data related to expressions and statements
public:
    list<int> truelist, falselist, nextlist;
    int instr;
    string loc;
    basic_type b_type;
    int fold;                                                   // used to determine the dimension of array being parsed
    string *folder;
    exxp()
    {
        fold = 0;
        folder = NULL;
    }
};


class symtab;
class symdata                                   // an entry in the symbol table, the variables have their usual meanings
{
public:
    string name;
    symtype type;
    symval *init_val;
    int size, offset;
    symtab *nested_symtab;
    symdata()
    {
        nested_symtab = NULL;
    }
};
class decc
{
public:
    string name;                                                            // to store name
    int pc;     // to store number of pointers
    vector<int> alist; // to store the list of indexes in case of an array declaration
    exxp *init_val;         // to store th initial valie
    basic_type b_type;  // type info
};

class param
{
public:
    string name;
    symtype type;
};

class symtab{                                                                   
public: 
    map<string,symdata*> _symtab;                                                           // a simple map is used for implementing a symbol table
    vector<symdata*> ord_sym;                                                               // to get an ordered list the pointer is inserted every time a new variable is added
    int offset;
    symtab() {offset = 0;}
    symdata * lookup(string var,basic_type bt = typ_int,int pc = 0);
    symdata* justlookup(string var);
    string gentemp(basic_type bt = typ_int);
    void print();
};

list<int> makelist(int index);
list<int> merge(list<int> a, list<int> b);

void gencode();


#endif /* ASS6_14CS30017_TRANSLATOR_H */
