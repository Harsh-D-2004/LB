//Count the number of capital characters

#include<stdio.h>

int countCapital(char *str)
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

    printf("Enter your name: \n");
    scanf("%[^'\n']s" , Arr);

    iRet = countCapital(Arr);  

    printf("The number of small characters are : %d" , iRet);                                 

    return 0;
}