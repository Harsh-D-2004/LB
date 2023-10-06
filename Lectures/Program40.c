//check wether number contains 8 in it or not

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 8)
        {
            break;
        }

        iNo = iNo / 10;
    }

    if(iNo == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter the number : ");
    scanf("%d" , &iValue);

    bRet = CheckDigit(iValue);

    if(bRet == true)
    {
        printf("The number contains 8 \n");
    }
    else
    {
        printf("The number does not contain 8 \n");
    }

    return 0;
}