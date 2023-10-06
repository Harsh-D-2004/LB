//Count the number of vowels

#include<stdio.h>

int countVowels(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'A') || (*str == 'e') || (*str == 'E') || (*str == 'i') || (*str == 'I') || (*str == 'o') || (*str == 'O') || (*str == 'u') || (*str == 'U'))
        {
        iCount++;
        }
        str++;    
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter your name: \n");
    scanf("%[^'\n']s" , Arr);

    iRet = countVowels(Arr);  

    printf("The number of vowels are : %d" , iRet);                                 

    return 0;
}