//concatinate stings

#include<stdio.h>

void strcatX(char *src , char *dest)
{

    while(*dest != '\0')
    {
        dest++;
    }

    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    strcatX(Arr , Brr);

    printf("String after copy is : %s\n" , Brr);

    return 0;
}