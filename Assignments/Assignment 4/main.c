#include<stdio.h>

extern int yyparse();

int main(){
	printf("\n\n==========Beginning of file parsing===========\n\n");

	int error_code = yyparse();

	if(!error_code)
		printf("\n\n==========File successfully parsed==============\n");
	else
		printf("\n\n==============Syntax error======================\n\n\n");

	return 0;
}
