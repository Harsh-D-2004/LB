#include<stdio.h>

int MultFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int iAns = 1;
    for(iCnt = 1 ; iCnt<=(iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t" , iCnt);
            iAns = iAns * iCnt;
        }
    }
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d" , &iValue);

    iRet = MultFactors(iValue);

    printf("The multiplication of factors is : %d" , iRet);

    return 0;
}