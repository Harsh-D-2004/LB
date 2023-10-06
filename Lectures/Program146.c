//Count the number of whitespaces

#include<stdio.h>

int countSpaces(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = countSpaces(Arr);  

    printf("The number of whitespaces are : %d" , iRet);                                 

    return 0;
}