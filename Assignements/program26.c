#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNum(int Arr[] , int iLenght , int iSearch)
{
    int iCnt = 0;
    bool bflag = false;

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(Arr[iCnt] == iSearch)
        {
            bflag = true;
        }
    }
    return bflag;
}

int main()
{
    int iSize = 0;
    int *ptr = 0;
    int iCnt = 0;
    int iValue = 0;
    bool bRet = 0;

    printf("Enter the size of array : \n");
    scanf("%d" , &iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d" , &ptr[iCnt]);
    }

    printf("Enter the value u want to search : \n");
    scanf("%d" , &iValue);

    printf("The elements are : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n" , ptr[iCnt]);
    }

    bRet = CheckNum(ptr , iSize , iValue);

    if(bRet == true)
    {
        printf("%d is present in array \n" , iValue);
    }
    else
    {
        printf("%d is not present in array \n" , iValue);
    }

    free(ptr);    

    return 0;
}