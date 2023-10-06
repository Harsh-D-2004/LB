//check wether number contains 8 in it or not

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
    int iDigit = 0;
    bool bFlag = false;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 8)
        {
            bFlag = true;
            break;
        }

        iNo = iNo / 10;
    }
    return bFlag;
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