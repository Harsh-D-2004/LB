//Display First OCuurence of character in string

#include<stdio.h>

int FirstOccurence(char *str , char cValue)
{
    int iCount = 1;
    int iPos = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iPos = iCount;
            break;
        }
        str++;
        iCount++;
    }

    return iCount;
}

int main()
{
    char ch;
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%s" , Arr);

    fflush(stdin);

    printf("Enter the character : \n");
    scanf("%c" , &ch);

    iRet = FirstOccurence(Arr , ch);

    printf("First occurenece of %c in %s is %d" , ch , Arr , iRet);


    return 0;
}