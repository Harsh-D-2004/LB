#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while(iNo != 0)
    {
        iCnt ++;
        iNo = iNo/10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d" , &iValue);

    iRet = CountDigits(iValue);

    printf("The number of digits are : %d" , iRet);

    return 0;
}