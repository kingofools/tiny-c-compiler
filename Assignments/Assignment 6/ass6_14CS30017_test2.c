int printi(int num);
int prints(char * c);
int readi(int *eP);

int get_gcd(int x, int y)
{
    int tmp;
    if(x>y)
    {
        tmp = x;
        x = y;
        y = tmp;
    }
    if(x == 0) return y;
    else
    {
        tmp = get_gcd(y%x,x);
        return tmp;
    };
}

int main()
{
    prints("Lets recursively compute the GCD !!\n Enter two numbers : ");
    int a, b, c, *err;
    err= &c;
    a = readi(err);
    b = readi(err);
    int gcd;
    gcd = get_gcd(a,b);
    prints("The gcd of "); printi(a); prints(" and "); printi(b); prints(" is = "); printi(gcd); prints("\n");
    return 0;
}
