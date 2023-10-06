#include<stdio.h>

int Display(int iNo)
{
    static int iDigit = 0;
    static int iMin = 9;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        Display(iNo);
    }

    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d" , &iValue);

    iRet = Display(iValue);

    printf("The min digit is : %d\n" , iRet);

    return 0;
}