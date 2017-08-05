
int printi(int num);
int prints(char * c);
int readi(int *eP);



int main()
{
    prints("Lets do bubble sort !!\n Enter the number(<20) of numbers:");
    int *err, c;
    err = &c;
    int n, arr[20];
    n = readi(err);
    int i,j,pos,mx,tmp;
    for(i = 0; i<n; i++)
    {
        prints("Enter number "); printi(i+1); prints(": ");       
        arr[i] =  readi(err);
    }
    prints("The given array is :");
    for(i = 0; i<n;i++)
    {
        printi(arr[i]); prints(",");
    }
    prints("\n"); 
    for( i = n; i>0; i--)
    {
        mx = -1000000000; pos = -1;
        for( j = 0; j<i; j++)
        {
            if(mx<arr[j]){
                mx = arr[j];
                pos = j;
            }
        }
        // swap pos and i-1
        tmp = arr[pos];
        arr[pos] = arr[i-1];
        arr[i-1] = tmp;
    }
    prints("The sorted array is :");
    for(i = 0; i<n;i++)
    {
        printi(arr[i]); prints(",");
    }
    prints("\n");
    return 0;
}