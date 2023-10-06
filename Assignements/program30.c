#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckNum(int Arr[] , int iLenght)
{
    int iCnt = 0;
    int iAns = 1;

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iAns = iAns * Arr[iCnt];
        }
    }
    return iAns;
}

int main()
{
    int iSize = 0;
    int *ptr = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the size of array : \n");
    scanf("%d" , &iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d" , &ptr[iCnt]);
    }

    printf("The elements are : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n" , ptr[iCnt]);
    }

    iRet = CheckNum(ptr , iSize);

    printf("The product is : %d\n" , iRet);

    free(ptr);    

    return 0;
}