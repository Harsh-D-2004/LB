#include<stdio.h>
#include<stdbool.h>

void DisplayAscii(ch)
{
    printf("Decimal : %d\n" , ch);
    printf("Hexadecimal : %x\n" , ch);
    printf("Octal : %o\n" , ch);
}

int main()
{
    char ch = '\0';

    printf("Enter the character: \n");
    scanf("%c" , &ch);

    DisplayAscii(ch);

    return 0;
}