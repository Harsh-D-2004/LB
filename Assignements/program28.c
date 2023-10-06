#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define ERR_NOTFOUND -1

int CheckNum(int Arr[] , int iLenght , int iSearch)
{
    int iCnt = 0;

    for(iCnt = (iLenght -1) ; iCnt >= 0 ; iCnt--)
    {
        if(Arr[iCnt] == iSearch)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int iSize = 0;
    int *ptr = 0;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter the size of array : \n");
    scanf("%d" , &iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d" , &ptr[iCnt]);
    }

    printf("Enter the value u want to search : \n");
    scanf("%d" , &iValue);

    printf("The elements are : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n" , ptr[iCnt]);
    }

    iRet = CheckNum(ptr , iSize , iValue);

    printf("The last occurence is : %d" , iRet);

    free(ptr);    

    return 0;
}