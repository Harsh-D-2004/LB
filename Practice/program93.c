#include<stdio.h>

int main()
{
    int iValue = 0;
    int iCnt = 0;

    printf("Enter the number : \n");
    scanf("%d" , &iValue);

    for(iCnt = 0 ; iCnt<=iValue ; iCnt++)
    {
        printf("%d\t" , iCnt);
    }
}