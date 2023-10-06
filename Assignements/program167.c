#include<stdio.h>

int Display(char Arr[])
{
    static int iCnt = 0;

    if(Arr[iCnt] != '\0')
    {
        iCnt++;
        Display(Arr);
    }

    return iCnt;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s" , Arr);

    iRet = Display(Arr);

    printf("The number of characters is : %d\n" , iRet);

    return 0;
}