#include<stdio.h>

void Replace(int *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the name : \n");
    scanf("%[^'\n']s" , Arr);

    Replace(Arr);

    printf("The new string is : %s\n" , Arr);

    return 0;
}