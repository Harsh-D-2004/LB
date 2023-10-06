//Accept the strinng and check wether it is palidrome or not

#include<stdio.h>
#include<stdbool.h>

bool checkPalidrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    bool bFlag = true;

    while(*end != 0)
    {
        end++;
    }
    end--;

    while(start < end)
    {
        if(*start == *end)
        {
            start++;
            end--;
        }
        else
        {
            bFlag = false;
            break;
        }
    }

    return bFlag;

}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    bRet = checkPalidrome(Arr);

    if(bRet == true)
    {
        printf("String is palidrome\n");
    }
    else
    {
        printf("String is not palidrome\n");
    }

    return 0;
} 