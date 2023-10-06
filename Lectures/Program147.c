//Count No of z

#include<stdio.h>

int countZ(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == 'z')
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

    iRet = countZ(Arr);  

    printf("The number of whitespaces are : %d" , iRet);                                 

    return 0;
}