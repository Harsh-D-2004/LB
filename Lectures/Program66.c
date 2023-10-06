//Find the minimum and maximum number

#include<stdio.h>
#include<stdlib.h>

int MaximumNumber(int Arr[] , int iLenght)
{
    int iMax = 0;
    iMax = Arr[0];
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int MinimumNumber(int Arr[] , int iLenght)
{
    int iMin = 0;
    iMin = Arr[0];
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet1 = 0;
    int iRet2 = 0;

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

    iRet1 = MaximumNumber(ptr , iSize);
    printf("The Largest element is : %d\n" , iRet1);

    iRet2 = MinimumNumber(ptr , iSize);
    printf("The Smallest element is : %d\n" , iRet2);

    free(ptr);

    return 0;
}