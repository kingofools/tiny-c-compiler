int printi(int num);
int prints(char * c);
int readi(int *eP);


int main()
{
    prints("Lets print the pascal's triangle. Enter a number:");
    int a, b, *err;
    err = &b;
    a = readi(err);
    int arr1[100], arr2[100];
    
    int i,j;
    for(i = 0; i<100; i++) 
        arr1[i] = 0;
    arr1[0] = 1;
    int turn = 0;
    for(i = 0; i<a; i++)
    {
        if(turn == 0)
        {
            for(j = 0; j<100; j++)
                arr2[j] = 0;
            for(j = 0; j<i+1; j++)
            {
                printi(arr1[j]); prints(",");
                arr2[j] = arr2[j] + arr1[j];
                arr2[j+1] = arr2[j+1] + arr1[j];
            }
        }
        else
        {
            for(j = 0; j<100; j++)
                arr1[j] = 0;
            for(j = 0; j<i+1; j++)
            {
                printi(arr2[j]); prints(",");
                arr1[j] = arr1[j] + arr2[j];
                arr1[j+1] = arr1[j+1] + arr2[j];
            }
        }
        turn = 1- turn;
        prints("\n");
    }
    return 0;
}
