#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 1;

    while(iCnt <= 4)
    {
        printf("* \t");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the value  \n");
    scanf("%d" , &iValue);

    Display(iValue);


    return 0;
}