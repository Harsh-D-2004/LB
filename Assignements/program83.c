#include<stdio.h>

Display(int iRow , int iCol)
{
    int i = 0;
    int j = 0;

    if(iRow != iCol)
    {
        return -1;
    }

    for(i = iRow ; i >= 1 ; i--)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if((i == j) || (i == 1) || (i == iRow) || (j == 1) || (j == iCol))
            {
                printf("*\t");
            }
            else if(i < j)
            {
                printf("$\t");
            }
            else
            {
                printf("#\t");
            }
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