#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define ERR_NOTFOUND -1

void CheckNum(int Arr[] , int iLenght , int Start , int End)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if((Arr[iCnt] > Start) && (Arr[iCnt] < End))
        {
            printf("Elements are : %d\t" , Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *ptr = 0;
    int iCnt = 0;
    int iStart = 0;
    int iEnd = 0;

    printf("Enter the size of array : \n");
    scanf("%d" , &iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d" , &ptr[iCnt]);
    }

    printf("Enter the start: \n");
    scanf("%d" , &iStart);

    printf("Enter the end: \n");
    scanf("%d" , &iEnd);

    printf("The elements are : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n" , ptr[iCnt]);
    }

    CheckNum(ptr , iSize , iStart , iEnd);

    free(ptr);    

    return 0;
}