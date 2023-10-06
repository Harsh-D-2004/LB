#include<stdio.h>

///////////////////////////////////////////////////////////
// Function  Name : Addition
// Input : unsigned integer
// Output : Unsigned integer
// Description : Performs Addition of two numbers
// Author : Harsh
// Date : 18/04/2023 + 19/04/2023
/////////////////////////////////////////////////////////

unsigned int Addition(unsigned int iValue1 , unsigned int iValue2)
{
    unsigned int iRet = 0;
    iRet = iValue1 + iValue2;
    return iRet;
}

////////////////////////////////////////////////////////////
// ENTRY POINT FUNCTION
///////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0 , iNo2 = 0 , iAns = 0;

    printf("Enter first number : \n");
    scanf("%d" , &iNo1);

    printf("Enter second number : \n");
    scanf("%d" , &iNo2);

    iAns = Addition(iNo1 , iNo2);
    printf("Addition is : %d\n" , iAns );

    return 0;
}