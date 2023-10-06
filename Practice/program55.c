#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1 , ch = 'a'; iCnt <= iNo ; iCnt++)
    {
        printf("%c\t" , ch);
        ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d" , &iValue);

    Display(iValue);

    return 0;
}