#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;
    
    for( ;iNo != 0; )
    {
        iDigit = iNo % 10;
        printf("%d\t" , iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d" , &iValue);

    DisplayDigits(iValue);

    return 0;
}