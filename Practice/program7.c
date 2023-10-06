#include<stdio.h>

int CountEven(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d" , &iValue1);

    iRet = CountEven(iValue1);

    printf("The count of even numbers is : %d\n" , iRet);

    return 0;
}