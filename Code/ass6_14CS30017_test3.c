int printi(int num);
int prints(char * c);
int readi(int *eP);


int fibo(int n)
{
    if(n == 0) return 0;
    else if(n==1) return 1;
    else return fibo(n-1) + fibo(n-2);
    ;
}

int main()
{
    prints("Lets recursively compute the fibonacci !!\n Enter a number : ");
    int a, c, *err;
    err= &c;
    a = readi(err);
    int f;
    f = fibo(a);
    prints("The "); printi(a); prints("th fibonacci number is "); printi(f);prints("\n");
    return 0;
}
