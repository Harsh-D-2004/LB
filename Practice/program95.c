#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    for(i = iRow ; i>=1 ; i--)
    {
        for(j = 1 ; j<=iCol ; j++)
        {
            if((i == j) || (i < j))
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter row : ");
    scanf("%d" , &iValue1);

    printf("Enter cols : ");
    scanf("%d" , &iValue2);

    Display(iValue1 , iValue2);
}