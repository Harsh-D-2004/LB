//check wether the strings are same or not (case insensiive)

#include<stdio.h>
#include<stdbool.h>

bool stricmpX(char *str1 , char *str2)
{
    while((*str1 != '\0') && (*str2 != '\0'))
    {
        if(*str1 != *str2)      //letters are different
        {
            if((*str1 >= 'a') && (*str1 <= 'z')) //first string is small
            {
                if(*str1 != (*str2 + 32))
                {
                    break;
                }
            }
            else if((*str1 >= 'A') && (*str1 <= 'Z')) //first string is capital
            {
                if(*str1 != (*str2 - 32))
                {
                    break;
                }
            }
            else //other symbols
            {
                break;
            }
        }        
        str1++;
        str2++;
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

    bRet = stricmpX(Arr , Brr);

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