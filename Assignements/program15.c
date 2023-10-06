#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iAns = 0;

    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("Factors : %d\t" , iCnt);
           iSum1 = iSum1 + iCnt;
        }
    }
    printf("\n");

    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("NonFactors : %d\t" , iCnt);
           iSum2 = iSum2 + iCnt;
        }
    }
    printf("\n");

    iAns = iSum1 - iSum2;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d" , &iValue);

    iRet = FactDiff(iValue);

    printf("The factorial difference is : %d" , iRet);

    return 0;
}