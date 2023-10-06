#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i , j = 0;

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1; j <= iCol ; j++)
        {
            if(i == j)
            {
                printf("*\t");
            }
            else if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
            {
                printf("$\t");
            }
            else
            {
                printf(" \t");
            }
        }
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