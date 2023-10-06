#include<stdio.h>

void DisplayI(int iNo)
{
    int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("* \t");
        iCnt++;
    }
}                                                                                               

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {                   
        printf("* \t"); 
        iCnt++; 
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the value  \n");
    scanf("%d" , &iValue);

    DisplayR(iValue);


    return 0;
}