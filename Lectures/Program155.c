//Count capital and small

#include<stdio.h>

void CapSmall(char *str)
{
    int iCount1 = 0;
    int iCount2 = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount1++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount2++;
        }
        str++;
    }

    printf("Small characters are : %d\n" , iCount1);
    printf("Capital characters are : %d\n" , iCount2);
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    CapSmall(Arr);

    return 0;
}