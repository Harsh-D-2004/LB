//concatinate stings asking user how many letters to copy

#include<stdio.h>

void strncatX(char *src , char *dest , int iNo)
{

    while(*dest != '\0')
    {
        dest++;
    }

    while((*src != '\0') && (iNo != 0))
    {
        *dest = *src;
        dest++;
        src++;
        iNo--;
    }

    dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
    int iValue = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter the no of letters : \n");
    scanf("%d" , &iValue);

    strncatX(Arr , Brr , iValue);

    printf("String after copy is : %s\n" , Brr);

    return 0;
}