#include<stdio.h>

void Display(int iFreq)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iFreq ; iCnt++)
    {
        printf("%d\t" , iCnt);
    }
    for(iCnt = (iFreq - 1) ; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t" , iCnt);
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter the frequency : \n");
    scanf("%d" , &iValue1);

    Display(iValue1);

    return 0;
}