#include<stdio.h>

Display(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i = 1 ; i<=iRow ; i++)
    {
        for(j = iCol , ch = 'A' ; j >= 1 ; j--)
        {
            printf("%c\t" , ch);
            ch++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the the number of rows: \n");
    scanf("%d" , &iValue1);

    printf("Enter the the number of colums: \n");
    scanf("%d" , &iValue2);

    Display(iValue1 , iValue2);

    return 0;
}