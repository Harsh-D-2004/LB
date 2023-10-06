//Count the number of digits

#include<stdio.h>

int countDigits(char *str)
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

    printf("Enter your name: \n");
    scanf("%[^'\n']s" , Arr);

    iRet = countDigits(Arr);  

    printf("The number of digits are : %d" , iRet);                                 

    return 0;
}