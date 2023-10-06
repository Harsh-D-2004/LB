//to check if the number is perfect or not

#include<stdio.h>
#include<stdbool.h>

bool Checkperfect(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt<=(iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
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

    bRet = Checkperfect(iValue);

    if(bRet == true)
    {
        printf("The number is perfect");
    }
    else
    {
        printf("The number is not perfect");
    }


    return 0;
}