//Pattern : a b c d e f g h

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%c\t" , ch);
        ch++;
    }
    printf("\n");
}

int main()
{
    int iFrequency = 0;
    
    printf("Enter the frequency : \n");
    scanf("%d" , &iFrequency);

    Display(iFrequency);

    return 0;
}