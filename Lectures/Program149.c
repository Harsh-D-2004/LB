//Check wether character in string or not

#include<stdio.h>
#include<stdbool.h>

bool checkZ(char *str)
{
    bool bFlag = false;
    while(*str != '\0')
    {
        if(*str == 'z')
        {
        bFlag = true;
        break;
        }
        str++;    
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int bRet = 0;

    printf("Enter your name: \n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter the character: \n");
    scanf("%c" , &ch);

    bRet = checkZ(Arr);  

                                    

    return 0;
}