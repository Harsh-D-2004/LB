#include<stdio.h>
#include<stdlib.h>

void CheckNum(int Arr[] , int iLenght)
{
    int iCnt = 0;
    int iMin = Arr[iCnt];

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if((Arr[iCnt] >= 100) && (Arr[iCnt] < 1000))
        {
            printf("Three digit numbers are : %d\t" , Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *ptr = 0;
    int iCnt = 0;

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

    CheckNum(ptr , iSize);

    free(ptr);    

    return 0;
}