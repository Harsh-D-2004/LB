/*
    * 
    * *
    * * * 
    * * * * 
    * * * * *
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
   int i = 0 , j = 0;

   if(iRow != iCol)
    {
        printf("Invalid input\n");
        return -1;
    }

   for(i = 1 ; i <= iRow ; i++) //outer
   {
    for(j = 1 ; j <= iCol; j++) //inner
    {
        if(j <= i)
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

    printf("Enter the number of rows : \n");
    scanf("%d" , &iValue1);

    printf("Enter the number of columns : \n");
    scanf("%d" , &iValue2);

    Display(iValue1 , iValue2);

    return 0;
}