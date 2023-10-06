#include<stdio.h>

void DisplayToggle(ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        int iCnt = 0;

        for(iCnt = ch ; iCnt >= 'a' ; iCnt--)
        {
            printf("%c\t" , iCnt);
        }
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        int iCnt = 0;

        for(iCnt = ch ; iCnt <= 'Z' ; iCnt++)
        {
            printf("%c\t" , iCnt);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    char ch = '\0';

    printf("Enter the character: \n");
    scanf("%c" , &ch);

    DisplayToggle(ch);


    return 0;
}