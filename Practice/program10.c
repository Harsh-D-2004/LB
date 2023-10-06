#include<stdio.h>

void CountCapSmall(char *str)
{
    int iCount1 = 0;
    int iCount2 = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount1++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCount2++;
        }
        str++;
    }

    printf("Number of capital letters are : %d\n" , iCount1);
    printf("Number of small letters are : %d\n" , iCount2);
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    CountCapSmall(Arr);

    return 0;
}