#include<stdio.h>

void EvenFreq(int Arr[] , int iLenght)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            printf("%d\n" , Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;;
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

    printf("The even elements are : \n");

    EvenFreq(ptr , iSize);

}