//Display Odd numbers of array

#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int Arr[] , int iLenght)
{
    for(int iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            printf("Odd Elements are : %d\t" , Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *ptr = 0;
    int iCnt = 0;

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

    OddDisplay(ptr , iSize);

    free(ptr);

    return 0;
}