#include<stdio.h>

typedef unsigned long int UNLI;

UNLI CalculatePower(int iBase , int iPower)
{
    int iCnt = 0;
    UNLI iAns = 1;

    if((iBase < 0) || (iPower < 0))
    {
        return 0;
    }

    for(iCnt = 1 ; iCnt<=iPower ; iCnt++)
    {
        iAns = iBase * iAns;
    }
    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2  = 0;
    UNLI iRet = 0;

    printf("Enter base : ");
    scanf("%d" , &iValue1);

    printf("Enter power : ");
    scanf("%d" , &iValue2);

    iRet = CalculatePower(iValue1 , iValue2);

    printf("The answer is %d" , iRet);

    return 0;
}