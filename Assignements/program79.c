#include<stdio.h>

int Char(char *str , char cValue)
{
    int iCount = 0;
    int iPos = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iPos = iCount;
        }
        str++;
        iCount++;
    }

    if(iPos == 0)
    {
        return -1;
    }
    else
    {
        return iPos;
    }
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter the characcter : \n");
    scanf(" %c" , &ch);

    iRet = Char(Arr , ch);

    if(iRet == -1)
    {
        printf("Character is not present \n");
    }
    else
    {
        printf("The last occurence is %d\n" , iRet);
    }


    return 0;
}