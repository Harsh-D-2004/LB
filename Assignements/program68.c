#include<stdio.h>

int DisplayCount(char *str)
{
    int iCount1 = 0;
    int iCount2 = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount1++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount2++;
        }
        str++;
    }
    return (iCount1 - iCount2);
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