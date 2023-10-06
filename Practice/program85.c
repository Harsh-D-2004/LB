#include<stdio.h>

void strcpyX(char *src , char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    strcpyX(Arr , Brr);

    printf("%s\n" , Brr);

    return 0;
}