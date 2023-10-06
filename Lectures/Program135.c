//check small letter

#include<stdio.h>
#include<stdbool.h>

bool checkSmall(char cValue)
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
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c" , &ch);

    bRet = checkSmall(ch);

    if(bRet == true)
    {
        printf("%c is small letter" , ch);
    }
    else
    {
        printf("%c is not a small letter" , ch);
    }


    return 0;
}