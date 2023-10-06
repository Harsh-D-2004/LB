//Accept number from user and check wether it is divisible by 3 as well as 5

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////
//
//Function Name:  CheckDivivisibility
//Input:          Integer
//Output:         Boolean  
//Description:    Checks wether input is divisible by 3 and 5
//Author:         Harsh Doshi  
//Date:           25/04/2023
//
//////////////////////////////////////////////

bool CheckDivisibility(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////
//Entry Point Function
////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter the number : ");
    scanf("%d" , &iValue);

    bRet = CheckDivisibility(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 3 and 5\n" , iValue);
    }
    else
    {
        printf("%d is not divisible by 3 and 5\n" , iValue);
    }

    return 0;
}