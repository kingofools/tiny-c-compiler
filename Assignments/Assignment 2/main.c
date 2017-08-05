# include "myl.h"
# include <stdio.h>
# define MAX_LENGTH 100

int main(){
    int char_num, n = 0, t, i = 0;
    printf("Enter a stream of characters :\n");
    char str[MAX_LENGTH], ch;
    while((ch=getchar())!='\n'){
        str[i++] = ch;
    }
    str[i] = '\0';
    printf("The stream you entered is : \n");
    char_num = prints(str);
    printf("\nThe no. of characters is : %d \n",char_num);
    printf("\nEnter a number :\n");
    n = readi(&t);
    if(t)
       printf("Invalid Input\n");
    else{
        printf("The number you entered is : \n");
        char_num = printi(n);
        printf("\nThe no. of characters is : %d\n",char_num);
    }
    printf("\nEnter a floating point number :\n");
    float num;
    t = readf(&num);
    if(t == ERR)
        printf("Invalid Input : ERR\n");
    else{
        printf("The number you entered is :\n");
        char_num = printd(num);
        printf("\nThe no. of characters is :\n");
        printf("%d\n",char_num); 
    }
return 0;
}
