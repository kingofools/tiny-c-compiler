#ifndef MYL_H_INCLUDED
#define MYL_H_INCLUDED
#define ERR 1
#define OK 0
int prints(char *);
int printi(int);
int readi(int *); // *eP is for error, if the input is not an integer
int readf(float *); // return value is error or OK
int printd(float);
#endif 
