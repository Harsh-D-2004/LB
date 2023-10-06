#include<stdio.h>
#include<stdbool.h>

bool Check8(int iNo)
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
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d" , &iValue);

    bRet = Check8(iValue);

    if(bRet == true)
    {
        printf("The number contains 8\n");
    }
    else
    {
        printf("The number does not contain 8\n");
    }

    return 0;
}