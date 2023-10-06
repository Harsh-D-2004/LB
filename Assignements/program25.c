//Find the maximum number

#include<stdio.h>
#include<stdlib.h>

int Search(int Arr[] , int iLenght , int iSearch)
{
    int iCnt = 0;
    int iCounter = 0;

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(Arr[iCnt] == iSearch)
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
    int iValue = 0;

    printf("Enter the size of array : \n");
    scanf("%d" , &iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d" , &ptr[iCnt]);
    }

    printf("Enter the elements u want to search : \n");
    scanf("%d" , &iValue);

    printf("The elements are : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n" , ptr[iCnt]);
    }

    iRet = Search(ptr , iSize , iValue);

    printf("The frequency of %d is : %d" , iValue , iRet);

    free(ptr);

    return 0;
}