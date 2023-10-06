//Return first occurence of that element

#include<stdio.h>
#include<stdlib.h>

int FirstOccurence(int Arr[] , int iLenght , int iSearch)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(Arr[iCnt] == iSearch)
        {
            break;
        }
    }

    if(iCnt == iLenght)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
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

    iRet = FirstOccurence(ptr , iSize , iValue);

    if(iRet == -1)
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