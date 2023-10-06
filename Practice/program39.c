//Armstrong number

#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iNo)
{
    int iSum = 0;
    int iDigit = 0;
    int iTemp = iNo;

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        iSum = iSum + (iDigit * iDigit * iDigit);
        iTemp = iTemp / 10;
    }

    if(iSum == iNo)
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

    printf("Enter the number : \n");
    scanf("%d" , &iValue);

    bRet = CheckArmstrong(iValue);

    if(bRet == true)
    {
        printf("It is a Armstrong number");
    }
    else
    {
        printf("It is not a Armstrong number");
    }


    return 0;
}