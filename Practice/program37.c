#include<stdio.h>

int DisplayAverage(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCnt = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        iCnt++;
    }
    return (((float)iSum)/((float)iCnt));
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d" , &iValue);

    iRet = DisplayAverage(iValue);

    printf("The average is : %d\n" , iRet);

    return 0;
}