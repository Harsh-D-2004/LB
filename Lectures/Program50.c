#include<stdio.h>

int MinimumDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 9;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit<iMin)
        {
            iMin = iDigit;
        }
        if(iMin == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d" , &iValue);

    iRet = MinimumDigit(iValue);

    printf("The min number is : %d" , iRet);

    return 0;
}