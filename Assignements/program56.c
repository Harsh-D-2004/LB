#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z') || (cValue >= 'A') && (cValue <= 'Z'))
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

    bRet = CheckAlpha(ch);

    if(bRet == true)
    {
        printf("%c is alphabet\n" , ch);
    }
    else
    {
        printf("%C is not alphabet\n" , ch);
    }

    return 0;
}