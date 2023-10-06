#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i , j = 0;
    char ch = '\0';
    ch = 'a';

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1; j <= iCol ; j++)
        {
            printf("%c\t" , ch);
        }
        ch++;
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the rows : \n");
    scanf("%d" , &iValue1);

    printf("Enter the cols : \n");
    scanf("%d" , &iValue2);

    Display(iValue1 , iValue2);

    return 0;
}