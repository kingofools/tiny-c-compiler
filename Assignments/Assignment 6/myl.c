#include "myl.h"
#define MAXS 100
#define PREC 6


int printi(int n)
{
    char str[MAXS];
    char temp;
    int len = 0;
    
    if(n==0) {
        str[len++] = '0';
    }
    else 
    {
        int b,e;
        if(n<0)
        {
            str[len++] = '-';
            n = -n;
        }
        b = len;
        while(n)
        {
            str[len++] = '0' + n%10;
            n /= 10;
        }
        e = len -1;
        while(e > b)
        {
            temp  = str[e];
            str[e] = str[b];
            str[b] = temp;
            e--; b++;
        }
    }

    __asm__ __volatile__ (
        "movl $4, %%eax \n\t"
        "movl $1, %%ebx \n\t"
        "int $128 \n\t"
        :
        :"c"(str), "d"(len)
        );
    return len;
}

int prints(char * str)
{
   int len = 0;
   while(str[len] != '\0') len++;
   __asm__ __volatile__ (
        "movl $4, %%eax \n\t"
        "movl $1, %%ebx \n\t"
        "int $128 \n\t"
        :
        :"c"(str), "d"(len)
        );
    return len;

}

int readi( int *eP)
{
    char str[MAXS];
    __asm__ __volatile__ (
        "movl $3, %%eax \n\t"
        "movl $0, %%ebx \n\t"
        "int $128 \n\t"
        :
        :"c"(str), "d"(20)
        );
    int i = 0;
    int neg = 0;
    if(str[i] == '-')
    {
        neg = 1;
        i++;
    }
    int val = 0;
    while(str[i] != '\n')
    {
        if(str[i]>'9' || str[i] <'0')
        {
            *eP = ERR;
            return val;
        }
        val *= 10;
        val += str[i] - '0';
        i++;
    }
    if(neg) val = -val;
    return val;

}


int readf( float *fP)
{
    char str[MAXS];
    __asm__ __volatile__ (
        "movl $3, %%eax \n\t"
        "movl $0, %%ebx \n\t"
        "int $128 \n\t"
        :
        :"c"(str), "d"(20)
        );
    int i = 0;
    int neg = 0;
    if(str[i] == '-')
    {
        neg = 1;
        i++;
    }
    float val = 0;
    while(str[i] != '\n'&&str[i] != '.')
    {
        if(str[i]>'9' || str[i] <'0')
        {
            return ERR;
        }
        val *= 10;
        val += str[i] - '0';
        i++;
    }
    float mult = 0.1;
    if(str[i] == '.')
    {
        i++;
        while(str[i] != '\n')
        {
            if(str[i]>'9' || str[i] <'0')
            {
                return ERR;
            }
            val += mult*((float)(str[i] - '0'));
            mult /= 10.0;
            i++;
        }

    }
    if(neg) val = -val;
    *fP = val;
    return 0;

}

int printd(float f)
{
    char str[MAXS], temp;
    int len = 0;
    if(f==0)
    {
        str[len++] = '0';
    }
    else
    {
        if(f<0) 
        {
            str[len++] = '-';
            f = -f;
        }
        int inte = f;
        f -= inte;

        if(inte==0) {
            str[len++] = '0';
        }
        else 
        {
            int b,e;
            b = len;
            while(inte)
            {
                str[len++] = '0' + inte%10;
                inte /= 10;
            }
            e = len -1;
            while(e > b)
            {
                temp  = str[e];
                str[e] = str[b];
                str[b] = temp;
                e--; b++;
            }
        }
      
        str[len++] = '.';
        f *= 10;
        int i;
        int k;
        for(i = 0;i<PREC;i++)
        {
            k = (int)f;
            str[len++] = '0' + k;
            f -= k;
            f *= 10;
        }
    }
    __asm__ __volatile__ (
        "movl $4, %%eax \n\t"
        "movl $1, %%ebx \n\t"
        "int $128 \n\t"
        :
        :"c"(str), "d"(len)
        );
    return len;
}




