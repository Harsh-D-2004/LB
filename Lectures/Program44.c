//accept number and accept digit of which the frequency is to be found

#include<stdio.h>

int CountDigit(int iNo , int iSearch)
{
    int iDigit = 0;
    int iCount = 0;

    if((iSearch < 0) || (iSearch > 9))
    {
        printf("Enter digit between 0 to 9\n");
        return 0;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d" , &iValue1);

    printf("Enter the digit (0 to 9): \n");
    scanf("%d" , &iValue2);

    iRet = CountDigit(iValue1 , iValue2);

    printf("The frequency of %d in %d is %d" , iValue2 , iValue1 , iRet);


    return 0;
}