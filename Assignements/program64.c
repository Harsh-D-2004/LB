#include<stdio.h>
#include<stdbool.h>

bool DisplaySymbol(ch)
{
    if((ch >= 33) && (ch <= 43))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character: \n");
    scanf("%c" , &ch);

    bRet = DisplaySymbol(ch);

    if(bRet == true)
    {
        printf("It is a special symbol \n");
    }
    else
    {
        printf("It is not a special symbol \n");
    }

    return 0;
}