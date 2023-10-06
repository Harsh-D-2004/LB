#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
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
    bool bRet = 0;

    printf("Enter the character : \n");
    scanf("%c" , &ch);

    bRet = CheckSmall(ch);

    if(bRet == true)
    {
        printf("The letter is small \n");
    }
    else
    {
        printf("The letter is capital \n");   
    }


    return 0;
}