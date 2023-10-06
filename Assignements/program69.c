#include<stdio.h>
#include<stdbool.h>

bool checkvowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'A') || (*str == 'e') || (*str == 'E') || (*str == 'i') || (*str == 'I') || (*str == 'o') || (*str == 'O') || (*str == 'u') || (*str == 'U'))
        {
            break;
        }
        str++;
    }

    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    bRet = checkvowel(Arr);

    if(bRet == true)
    {
        printf("The string contains vowel \n");
    }
    else
    {
        printf("The string does not contains vowel \n");
    }

    return 0;
}