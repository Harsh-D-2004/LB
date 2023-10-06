#include<stdio.h>
#include<stdlib.h>

int Min(int Arr[] , int iLenght)
{
    int iCnt = 0;
    int iMin = 0;
    iMin = Arr[0];

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
    int *ip = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the size : \n");
    scanf("%d" , &iSize);

    ip = (int*)malloc(sizeof(int) * iSize);

    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d" , &ip[iCnt]);
    }

    printf("Elements are : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n" , ip[iCnt]);
    }

    iRet = Min(ip , iSize);

    printf("The min element is : %d\n" , iRet);

    return 0;
}