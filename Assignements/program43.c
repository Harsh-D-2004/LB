#include<stdio.h>

Display(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    for(i = 1 ; i<=iRow ; i++)
    {
        for(j = iCol , ch1 = 'A' , ch2 = 'a' ; j >= 1 ; j--)
        {
            if(i % 2 == 0)
            {
                printf("%c\t" , ch2);
                ch1++;
            }
            else
            {
                printf("%c\t" , ch1);
                ch2++;
            }
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