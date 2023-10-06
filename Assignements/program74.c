#include<stdio.h>

void CapitalSmall(char *str)
{
    char cTemp = '\0';

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%p\t" , *str);
        }
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    CapitalSmall(Arr);

    return 0;
}