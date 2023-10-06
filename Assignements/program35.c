#include<stdio.h>
#include<stdlib.h>

void CheckNum(int Arr[] , int iLenght)
{
    int iCnt = 0;
    int iDigit = 0;
    int iAns = 0;

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        iAns = 0;
        
        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iAns = iDigit + iAns;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        printf("Sum is : %d\t" , iAns);
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