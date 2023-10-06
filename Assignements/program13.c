#include<stdio.h>

void DisplayNonfact(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("Non factors are : %d\t" , iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d" , &iValue);

    DisplayNonfact(iValue);

    return 0;
}