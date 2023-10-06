#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[] , int iLenght)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 0 ; iCnt <= iLenght ; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0;
    int *iptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    
    printf("Enter the number of elements : \n");
    scanf("%d" , &iSize);

    iptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d" , &iptr[iCnt]);
    }

    printf("The elements are : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n" , iptr[iCnt]);
    }

    iRet = CountOdd(iptr , iSize);

    printf("Number ofodd numbers are : %d\n" , iRet);

    free(iptr);

    return 0;
}