//Pattern : a  b  c  d

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1 , ch = 'a' ; iCnt <= iNo ; iCnt++ , ch++)
    {
        printf("%c\t" , ch);
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