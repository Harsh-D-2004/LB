/*
    a a a a 
    b b b b
    c c c c 
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
   int i = 0 , j = 0;
   char ch = '\0';

   for(i = 1  , ch = 'a'; i <= iRow ; i++ , ch++) //outer
   {
    for(j = 1 ; j <= iCol ; j++) //inner
    {
        printf("%c\t" , ch);
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