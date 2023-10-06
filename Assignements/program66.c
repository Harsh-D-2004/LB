#include<stdio.h>

int DisplayCount(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    iRet = DisplayCount(Arr);

    printf("The number of capital letters are : %d\n" , iRet);

    return 0;
}