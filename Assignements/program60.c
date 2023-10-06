#include<stdio.h>

void CheckTime(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'D'))
    {
        switch(cValue)
    {
        case 'A':
            printf("Your exam time is 7AM\n");
            break;
        case 'B':
            printf("Your exam time is 8:30AM\n");
            break;
        case 'C':
            printf("Your exam time is 9:20AM\n");
            break;
        case 'D':
            printf("Your exam time is 10:30AM\n"); 
    } 
    }
    else
    {
        printf("Enter proper division\n");
    }
    
}

int main()
{
    char ch = '\0';

    printf("Enter your: \n");
    scanf("%c" , &ch);

    CheckTime(ch);


    return 0;
}