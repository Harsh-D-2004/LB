#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo<0) //Filter
    {
        printf("Please enter the positive number");
        return;
    }
    for(iCnt = 1 ; iCnt<=iNo ; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency of Jay Ganesh statement: \n");
    scanf("%d" , &iValue);

    Display(iValue);

    return 0;
}