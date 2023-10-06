//Pattern :  1 2 3 4 5 4 3 2 1

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo - 1 ; iCnt++)
    {
        printf("%d\t" , iCnt);
    }
    
    for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t" , iCnt);
    }
}

int main()
{
    int iFrequency = 0;
    
    printf("Enter the frequency : \n");
    scanf("%d" , &iFrequency);

    Display(iFrequency);

    return 0;
}