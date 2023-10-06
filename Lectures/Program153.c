#include<stdio.h>

#define ERR_NOTFOUND -1

int FirstOccurence(char *str , char cValue)
{
    int iCount = 1;

    while((*str != '\0') && (*str != cValue))
    {
        str++;
        iCount++;
    }

    if(*str == '\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCount;
    }
}

int main()
{
    char ch;
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    fflush(stdin);

    printf("Enter the character : \n");
    scanf("%c" , &ch);

    iRet = FirstOccurence(Arr , ch);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such character\n");
    }
    else
    {
        printf("First occurenece of %c in %s is %d" , ch , Arr , iRet);
    }

    return 0;
}