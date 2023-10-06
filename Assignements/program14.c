#include<stdio.h>

int SumNonfact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t" , iCnt);
           iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d" , &iValue);

    iRet = SumNonfact(iValue);

    printf("The sum of non factors is : %d" , iRet);

    return 0;
}