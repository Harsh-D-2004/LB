#include<stdio.h>

int CountDigits(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
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

    iRet = CountDigits(Arr);

    printf("The number of digits are : %d\n" , iRet);

    return 0;
}