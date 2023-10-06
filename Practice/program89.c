#include<stdio.h>

int CalculatePower(int iBase  , int iPower)
{
    int iCnt = 0;
    int iAns = 1;

    for(iCnt = 1 ; iCnt <= iPower ; iCnt++)
    {
        iAns = iAns * iBase;
    }
    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the base : \n");
    scanf("%d" , &iValue1);

    printf("Enter the power : \n");
    scanf("%d" , &iValue2);

    iRet = CalculatePower(iValue1 , iValue2);

    printf("The answer is %d\n" , iRet);

    return 0;
}