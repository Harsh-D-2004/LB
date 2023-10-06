//replace small case letter with capital case letter (same letter)

#include<stdio.h>

void strlwrX(char *str)
{
    int Gap = 'a' - 'A';

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - Gap;
        }

        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + Gap;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    strlwrX(Arr);

    printf("Edited string is : %s\n" , Arr);

    return 0;
}