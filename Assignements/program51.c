#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i , j = 0;
    
    for(i = iRow ; i >= 1 ; i--)
    {
        for(j = 1 ; j<= i ; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows : \n");
    scanf("%d" , &iValue1);

    printf("Enter the number of rows : \n");
    scanf("%d" , &iValue2);

    Display(iValue1 , iValue2);

    return 0;
}