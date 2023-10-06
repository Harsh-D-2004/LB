//check wether number is palidrome or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPalidrome(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;
    int iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iDigit % 10;
        iReverse = (iReverse * 10) + iDigit;
        iNo = iNo / 10;
    }

    if(iReverse == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d" , &iValue);

    bRet = CheckPalidrome(iValue);

    if(bRet == true)
    {
        printf("The number is palidrome");
    }
    else
    {
        printf("The number is not palidrome");
    }

    return 0;
}