#include<stdio.h>

int SumFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int Sum = 0;

    for(iCnt = 2 ; (iCnt <= (iNo/2)) ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            Sum = Sum + iCnt;
        }
    }
    return Sum;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d" , &iValue1);

    iRet = SumFactors(iValue1);

    printf("The sum of factors is : %d\n" , iRet);

    return 0;
}