//DCount the number of letters from string

#include<stdio.h>

int strlenX(char str[])
{
    int  iCnt = 0;
    while(str[iCnt] != '\0')
    {
        iCnt++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter your name: \n");
    scanf("%[^'\n']s" , Arr);

    printf("Your name is : %s\n" , Arr);

    iRet = strlenX(Arr);  

    printf("The lenght of name is : %d" , iRet);                                 

    return 0;
}