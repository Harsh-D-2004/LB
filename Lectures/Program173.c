//check wether the strings are same or not

#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1 , char *str2)
{
    while((*str1 != '\0') && (*str2 != '\0'))
    {
        if(*str1 == *str2)
        {
            *str1++;
            *str2++;
        }
        else
        {
            break;
        }
    }

    if((*str1 == '\0') && (*str2 == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter the first string : \n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter the second string : \n");
    scanf(" %[^'\n']s" , Brr);

    bRet = strcmpX(Arr , Brr);

    if(bRet == true)
    {
        printf("Both the strings are same\n");
    }
    else
    {
        printf("Both the strings are not same\n");
    }

    return 0;
} 