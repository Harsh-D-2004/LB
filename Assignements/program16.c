//Find the maximum number

#include<stdio.h>
#include<stdlib.h>

int EvenOdd(int Arr[] , int iLenght)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
    }

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iSum2 = iSum2 + Arr[iCnt];
        }
    }

    return (iSum1 - iSum2);
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
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

    iRet = EvenOdd(ptr , iSize);

    printf("The difference is : %d" , iRet);

    free(ptr);

    return 0;
}