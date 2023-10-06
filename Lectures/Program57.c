//Addition of elements of Array

#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[] , int iLenght)
{
    int iSum = 0;

    for(int iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        iSum = Arr[iCnt] + iSum;
    }

    return iSum;
}

int main()
{
    int iSize = 0;
    int *ptr = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements : \n");
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

    iRet = Addition(ptr , iSize);

    printf("Addition is : %d" , iRet);

    free(ptr);

    return 0;
}