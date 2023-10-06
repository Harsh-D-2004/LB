#include<stdio.h>

typedef unsigned long int UNLI;

UNLI getFactorial(int iNo)
{
    if(iNo < 0)     //UPDATER
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    long int iAns = 1;

    for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
    {
        iAns = iAns * iCnt;
    }
    return iAns;
}

int main()
{
    int iValue = 0;
    UNLI iRet = 0;

    printf("Enter number : \n");
    scanf("%d" , &iValue);

    iRet = getFactorial(iValue);

    printf("The factorial is %u" , iRet);

    return 0;
}