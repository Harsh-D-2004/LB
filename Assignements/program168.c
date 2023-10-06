#include<stdio.h>

int Display(int iNo)
{
    static int iCnt = 0;
    static int iAns = 1;

    if(iCnt < iNo)
    {
        iAns = iAns * (iNo - iCnt);
        iCnt++;
        Display(iNo);
    }
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d" , &iValue);

    iRet = Display(iValue);

    printf("The factorial is : %d\n" , iRet);

    return 0;
}