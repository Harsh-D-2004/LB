//count frequency of 8

#include<stdio.h>

int CountFrequency(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d" , &iValue);

    iRet = CountFrequency(iValue);

    printf("The frequency of 8 is : %d" , iRet);

    return 0;
}