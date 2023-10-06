//Find the maximum number

#include<stdio.h>
#include<stdlib.h>

int Count11(int Arr[] , int iLenght)
{
    int iCnt = 0;
    int iCounter = 0;

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCounter++;
        }
    }
    return iCounter;
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

    iRet = Count11(ptr , iSize);

    printf("The frequency of 11 is : %d" , iRet);

    free(ptr);

    return 0;
}