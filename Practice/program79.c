#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;
    for(iCnt = 2 ; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d" , &iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("The number is prime \n");
    }
    else
    {
        printf("The number is not prime \n");
    }

    return 0;
}