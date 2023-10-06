#include<stdio.h>

int strlenX(char *str)
{
    int iCnt = 0;

    while(str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char ch[10];
    int iRet = 0;

    printf("Enter your name : \n");
    scanf("%c" , ch);

    iRet = strlenX(ch[10]);

    printf("The lenght of your name is : " , iRet);

    return 0;
}