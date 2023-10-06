//Display ASCII table

#include<stdio.h>

int main()
{
    for(int iCnt = 0 ; iCnt<=127 ; iCnt++)
    {
        printf("%c\t%d\n" , iCnt , iCnt);
    }


    return 0;
}