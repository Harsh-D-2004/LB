#include<stdio.h>

void DisplayFact(int iNo)
{
    int iCnt = 0;
    for(iCnt = (iNo/2) ; iCnt >= 1 ; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t" , iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d" , &iValue);

    DisplayFact(iValue);

    return 0;
}