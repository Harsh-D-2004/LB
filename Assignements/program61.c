#include<stdio.h>

void DisplayAsciiTable()
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt <= 127 ; iCnt++)
    {
        printf("%d\t%x\t%o\t%ch" , iCnt , iCnt , iCnt , iCnt);
    }
}

int main()
{

    DisplayAsciiTable();

    return 0;
}