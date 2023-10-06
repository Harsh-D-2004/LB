//Find last occurence of character in string

#include<stdio.h>

#define ERR_NOTFOUND -1

int LastOccurence(char *str , char cValue)
{
    int iCount = 1;
    int iPos = ERR_NOTFOUND;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iPos = iCount;
        }      
        str++;
        iCount++;
    }

    return iPos;
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

    iRet = LastOccurence(Arr , ch);

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