/*
    A
    B C
    A B C
    A B C D
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
   int i = 0 , j = 0;
   char ch = '\0';

   if(iRow != iCol)
    {
        printf("Invalid input\n");
        return -1;
    }

   for(i = 1 ; i <= iRow ; i++) //outer
   {
    for(j = 1 , ch = 'A'; j <= i ; j++) //inner
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

    printf("Enter the number of rows : \n");
    scanf("%d" , &iValue1);

    printf("Enter the number of columns : \n");
    scanf("%d" , &iValue2);

    Display(iValue1 , iValue2);

    return 0;
}