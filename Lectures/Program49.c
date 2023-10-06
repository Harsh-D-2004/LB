//return average of number

#include<stdio.h>

float DigitsAverage(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iDigit + iSum;
        iCount++;
        iNo = iNo / 10;
    }
    return ((float)iSum/(float)iCount);
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter the number : ");
    scanf("%d" , &iValue);

    fRet = DigitsAverage(iValue);

    printf("The average of digits is : %f" , fRet);

    return 0;
}