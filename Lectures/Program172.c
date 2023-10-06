//copy data from one string to another

#include<stdio.h>

void strcpyX(char *src , char *dest , int iLenght)
{
    while((*src != '\0') && (iLenght != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iLenght--;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];
    int iNo = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter the no of characters : \n");
    scanf("%d" , &iNo);

    strcpyX(Arr , Brr , iNo);

    printf("String after copy is : %s\n" , Brr);

    return 0;
}