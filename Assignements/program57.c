#include<stdio.h>
#include<stdbool.h>

bool CheckCap(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
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

    bRet = CheckCap(ch);

    if(bRet == true)
    {
        printf("%c is capital letter\n" , ch);
    }
    else
    {
        printf("%C is not capital letter\n" , ch);
    }

    return 0;
}