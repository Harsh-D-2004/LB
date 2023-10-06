//maximum digits

#include<stdio.h>

int MaximumDigit(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit>iMax)
        {
            iMax = iDigit;
        }
        if(iMax == 9)
        {
            break;
        }
        iNo = iNo / 10;
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d" , &iValue);

    iRet = MaximumDigit(iValue);

    printf("The max number is : %d" , iRet);

    return 0;
}