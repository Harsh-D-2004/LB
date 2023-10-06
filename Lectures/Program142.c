//Count the number of small characters

#include<stdio.h>

int countSmall(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = countSmall(Arr);  

    printf("The number of small characters are : %d" , iRet);                                 

    return 0;
}