#include<stdio.h>

void Display(int iNo , int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt<=iFrequency ; iCnt++)
    {
        printf("%d" , iNo);
    }
}

int main()
{
    int iValue = 0;
    int iFreq = 0;

    printf("Enter the number : ");
    scanf("%d" , &iValue);

    printf("Enter the frequency : ");
    scanf("%d" , &iFreq);

    Display(iValue , iFreq);

    return 0;
}