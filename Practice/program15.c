#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char *str ,char cValue)
{
    bool bFlag = false;

    while(*str != 0)
    {
        if(*str == cValue)
        {
            bFlag = true;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    bool bRet = false;

    printf("Enter the string \n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter the character : \n");
    scanf(" %c" , &ch);

    bRet = CheckCapital(Arr , ch);

    if(bRet == true)
    {
        printf("Character is present\n");
    }
    else
    {
        printf("Character is not present\n");
    }

    return 0;
}