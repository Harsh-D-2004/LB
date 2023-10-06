//Addition of elements of Array

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[] , int iLenght)
{
    int iSum = 0;

    for(int iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        iSum = Arr[iCnt] + iSum;
    }

    return ((float)iSum)/((float)iLenght);
}

int main()
{
    int iSize = 0;
    int *ptr = 0;
    int iCnt = 0;
    float fRet = 0;

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

    fRet = Average(ptr , iSize);

    printf("Average is : %f" , fRet);

    free(ptr);

    return 0;
}