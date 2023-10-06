#include<stdio.h>

unsigned long int Addition(int iNo1 , int iNo2)
{
    unsigned long int Ans = 0;
    Ans = iNo1 + iNo2;
    return Ans;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    unsigned long int iRet = 0;

    printf("Enter the number 1 : \n");
    scanf("%d" , &iValue1);

    printf("Enter the number 2 : \n");
    scanf("%d" , &iValue2);

    iRet = Addition(iValue1 , iValue2);

    printf("The Addition is : %d\n" , iRet);

    return 0;
}