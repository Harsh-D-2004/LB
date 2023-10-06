#include<stdio.h>
#include<stdlib.h>

void Fun(int Arr[] , int iLenght)
{
    //Logic
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
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

    Fun(ptr , iSize);

    free(ptr);

    return 0;
}