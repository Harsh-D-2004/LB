//DCount the number of letters from string

#include<stdio.h>

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter your name: \n");
    scanf("%[^'\n']s" , Arr);

    printf("Your name is : %s\n" , Arr);

    iRet = strlen(Arr);  

    printf("The lenght of name is : %d\n" , iRet);                                 

    return 0;
}