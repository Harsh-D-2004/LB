#include<stdio.h>
#include<stdbool.h>

int CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;
    for(iCnt = 2 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            bFlag = false;
        }
    }
    return bFlag;
}

int main()
{
    int iValue1 = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d" , &iValue1);

    bRet = CheckPrime(iValue1);

    if(bRet == true)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }

    return 0;
}