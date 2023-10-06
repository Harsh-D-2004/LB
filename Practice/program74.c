#include<stdio.h>
#include<stdlib.h>

int LastOccurence(int Arr[] , int iLenght , int iSearch)
{
    int iCnt = 0;

    for(iCnt = (iLenght - 1) ; iCnt >= 0 ; iCnt--)
    {
        if(Arr[iCnt] == iSearch)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int iSize = 0;
    int *iptr = NULL;
    int iRet = 0;
    int iValue = 0;
    int iCnt = 0;

    printf("Enter the size of array : \n");
    scanf("%d" , &iSize);

    iptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d" , &iptr[iCnt]);
    }

    printf("Enter the element u want to search : \n");
    scanf("%d" , &iValue);

    printf("The elements are : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n" , iptr[iCnt]);
    }

    iRet = LastOccurence(iptr , iSize , iValue);

    printf("The last occurence of element is : %d\n" , iRet);

    free(iptr);

    return 0;
}