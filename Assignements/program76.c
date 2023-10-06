#include<stdio.h>
#include<stdbool.h>

int Char(char *str , char cValue)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    bool bRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter the characcter : \n");
    scanf(" %c" , &ch);

    bRet = Char(Arr , ch);

    if(bRet == true)
    {
        printf("The character is present \n");
    }
    else
    {
        printf("The character is not present \n");
    }

    return 0;
}