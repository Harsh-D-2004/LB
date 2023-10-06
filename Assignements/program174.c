#include<stdio.h>

void Display(int iNo)
{
    static int iDigit = 0;
    static int iMax = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d \t" , iDigit);
        iNo = iNo / 10;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d" , &iValue);

    Display(iValue);

    return 0;
}