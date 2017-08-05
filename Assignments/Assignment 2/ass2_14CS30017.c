#include "myl.h"
#define MAX_LENGTH 100

int prints(char *s) {
	int i,bytes;
	for(i=0;s[i]!='\0';i++){}                                                       //find length of s
	char buff[i+1];
	for(i=0;s[i]!='\0';i++){ 														//store string in buffer
		buff[i] = s[i];
	}
	buff[i] = '\n';
	bytes = i+1;

	__asm__ __volatile__ ( 															//print from buffer
			"movl $1, %%eax \n\t"
			"movq $1, %%rdi \n\t"
			"syscall \n\t"
			:
			:"S"(buff), "d"(bytes)
	);
return bytes-1;
}

int printi(int n) {
	char buff[MAX_LENGTH], zero='0';
	int i=0, j, k, bytes;
	if(n == 0) buff[i++]=zero;
	else{
		if(n < 0) { 																//check for negative number
		buff[i++]='-';
		n = -n;
		}
		while(n){	 																//store int in buffer
			int dig = n%10;
			buff[i++] = (char)(zero+dig);
			n /= 10;
		}if(buff[0] == '-') j = 1;
		else j = 0;
		k=i-1;
		while(j<k){ 																//swap the numbers to change order
			char temp=buff[j];
			buff[j++] = buff[k];
			buff[k--] = temp;
		}
	}
	buff[i]='\n';
	bytes = i+1;
	__asm__ __volatile__ ( 															//print integer
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff), "d"(bytes)
	) ;
return bytes-1; // $4: write, $1: on stdin
}

int readi(int *eP){
  	char buff[MAX_LENGTH];
  	int i,len,k, result=0;
  	__asm__ __volatile__( 															//read int from user
        "movl $0, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :"=rax"(len)
        :"S"(buff),"d"(MAX_LENGTH)
        );
  	len--;
	if (len <=0){
		*eP = 1;
	  	return 0;
	}
	if (buff[0]=='-'){                      										//check for negative number
		i=1;
	}
	else{
	  	i=0;
	}
	k=len;
	while(i<k){
	  	if (buff[i]>='0' && buff[i]<='9'){
	    	result = result*10 + (buff[i]-'0');     
	    	i++;
	  	}
	  	else{
	    	*eP = ERR;        														//eP returns  error
	    	return 0;
	  	}
	}
	if (buff[0]=='-'){
		result = -result;
	}
	*eP = OK;          																//eP returns OK
return result;
}

int readf(float *fP) {
	char buff[MAX_LENGTH];
	int bytes=MAX_LENGTH;
	__asm__ __volatile__ ( 															//reads float from user
			"movq $0, %%rdi \n\t"
			"movq $0, %%rax \n\t"

			"syscall \n\t"
			:
			:"S"(buff), "d"(bytes)
		);
	unsigned int i;
	*fP = 0;
	for(i=0 ; buff[i]!='\n' && buff[i]!='.' && buff[i]!='\0' ; i++){ 				//check for terminating char
		if(i==0) {
			if(buff[0] == '-' || buff[0] =='+') {
				continue;
			}
		}
		if(buff[i] < '0' || buff[i] > '9') { 										//check for non-numbers
			return ERR;
		}
		*fP = (*fP)*10;
		*fP = *fP + (int)(buff[i]-'0');
	}
	float f = 0;
	float p = 1;
	if(buff[i] == '.') {
		i++;
		for(; buff[i]!='\n' && buff[i]!='\0' ; i++){
			if(buff[i] < '0' || buff[i] > '9') {
				return ERR;
			}
			p *= 0.1;
			f = f + ((int)(buff[i]-'0'))*p; 										//calculating fractional part
		}
	}
	*fP = (*fP)+f;
	if(buff[0] == '-')
		(*fP) = (*fP)*-1;
return OK;
}

int printd(float f){
    char buff[MAX_LENGTH], zero='0';
    int i = 0,start = 0;
    if(f == 0.0)
        buff[i++] = zero;
    else if(f<0){ 																	//check for negative floats
        buff[i++] = '-';
        f = (-1)*f;
        start = 1;
    }
    int integer_part = (int)f;
    float f_part = f - integer_part;
    while(integer_part){
        buff[i++] = (char)((integer_part%10)+zero);
        integer_part/=10;
    }
    int last = i-1;
    while(start<last){ 																//swap the numbers to change order
        int temp = buff[start];
        buff[start++] = buff[last];
        buff[last--] = temp;
    }
    buff[i++] = '.';
    if(f_part == 0.0)
        buff[i++] = zero;
    else{
        int no_of_times = 0;
		int rem = 0;
        while(no_of_times<4) { 														//calculates upto 4 digits of precision
            rem = (int)(f_part*10);
            buff[i++] = (char)(rem + zero);
            f_part*=10;
            f_part = f_part - rem;
	    	no_of_times++;
        }
    }
	__asm__ __volatile__ ( 															//print float from buffer
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff), "d"(i)
		);
return i;
}
