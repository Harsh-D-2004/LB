//check digit

#include<stdio.h>
#include<stdbool.h>

bool checkSmall(char cValue)
{
    if((cValue >= '0') && (cValue <= '9'))
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

    printf("Enter the character : \n");
    scanf("%c" , &ch);

    bRet = checkSmall(ch);

    if(bRet == true)
    {
        printf("%c is a digit" , ch);
    }
    else
    {
        printf("%c is not a digit" , ch);
    }


    return 0;
}