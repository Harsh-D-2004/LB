//check capital letter

#include<stdio.h>
#include<stdbool.h>

bool checkCapital(char cValue)
{
    if((cValue >= 65) && (cValue <= 90))
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

    bRet = checkCapital(ch);

    if(bRet == true)
    {
        printf("%c is capital letter" , ch);
    }
    else
    {
        printf("%c is not a capital letter" , ch);
    }


    return 0;
}