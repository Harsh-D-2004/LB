//Pattern : a 1 b 2 c 3 d

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1 , ch = 'a' ; iCnt <= iNo ; iCnt++ , ch++)
    {
        printf("%c\t%d\t" , ch , iCnt);
    }
    printf("\n");
}

int main()
{
    int iFrequency = 0;
    
    printf("Enter the frequency : \n");
    scanf("%d" , &iFrequency);

    Display(iFrequency);

    return 0;
}