#include<stdio.h>

int Display(int iNo)
{
    static int iDigit = 0;
    static int iMult = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
        Display(iNo);
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d" , &iValue);

    iRet = Display(iValue);

    printf("The multiplication is : %d\n" , iRet);

    return 0;
}