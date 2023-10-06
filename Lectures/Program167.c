//copy lstring into another string in reverse order

#include<stdio.h>

void strcpyrevX(char *src , char *dest)
{
    int iLenght = 0;

    while(*src != '\0')
    {
        src++;
        iLenght++;
    }

    src--;

    while(iLenght != 0)
    {
        *dest = *src;
        src--;
        dest++;
        iLenght--;
    }

    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    strcpyrevX(Arr , Brr);

    printf("String after copy is : %s\n" , Brr);

    return 0;
}