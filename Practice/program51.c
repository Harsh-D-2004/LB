#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        printf("Enter the positive number \n");
    }

    for(int iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("Jay Ganesh....\n");
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