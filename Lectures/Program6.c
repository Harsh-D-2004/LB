//Write a program to check wether number is even or odd

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////
//
//Function Name:  CheckEvenOdd
//Input:          Integer
//Output:         Boolean  
//Description:    Checks wether input is even or odd
//Author:         Harsh Doshi  
//Date:           25/04/2023
//
//////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
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
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d" , &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("The number is even %d\n" , iValue);
    }
    else
    {
        printf("%d The number is odd \n" , iValue);
    };

    return 0;
}