#include<stdio.h>

void reverse(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char cTemp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        cTemp = *start;
        *start = *end;
        *end = cTemp;
        start++;
        end--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    reverse(Arr);

    printf("Reversed string is : %s" , Arr);

    return 0;
}