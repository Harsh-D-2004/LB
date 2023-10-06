#include<stdio.h>

void DisplayToggle(ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
        printf("Capital : %c" , ch);
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
        printf("Small : %c" , ch);
    }
    else
    {
        printf(" Your character is : %c" , ch);
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