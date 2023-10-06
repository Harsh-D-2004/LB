//Check wether character in string or not

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str , char cValue)
{
    int iCount = 0;   
    while(*str != '\0')
    {
        if(*str == cValue)
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
    char ch = '\0';
    int iRet = 0;

    printf("Enter your name: \n");
    scanf("%[^'\n']s" , Arr);

    fflush(stdin);

    printf("Enter the character: \n");
    scanf("%c" , &ch);

    iRet = CountChar(Arr , ch);  

    printf("Number of occurences are : %d\n" , iRet);
                                
    return 0;
}