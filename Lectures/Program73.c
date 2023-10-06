//Return last occurence of that element

#include<stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1

int LastOccurence(int Arr[] , int iLenght , int iSearch)
{
    int iCnt = 0;

    for(iCnt = iLenght-1; iCnt >= 0 ; iCnt--)
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
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter the size of array : \n");
    scanf("%d" , &iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d" , &ptr[iCnt]);
    }

    printf("Enter the element u want to search : \n");
    scanf("%d" , &iValue);

    printf("The elements are : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n" , ptr[iCnt]);
    }

    iRet = LastOccurence(ptr , iSize , iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("%d occured at %d\n" , iValue , iRet);
    }

    free(ptr);

    return 0;
}