#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNum(int Arr[] , int iLenght , int iNo)
{
    int iCnt = 0;
    bool bFlag = false;
    for(iCnt = 0 ; iCnt <= iLenght ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
        }
    }
    return bFlag;

}

int main()
{
    int iSize = 0;
    int *iptr = NULL;
    int iCnt = 0;
    bool bRet = false;
    int iValue = 0;
    
    printf("Enter the number of elements : \n");
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

    bRet = CheckNum(iptr , iSize , iValue);

    if(bRet == true)
    {
        printf("The number is in the array");
    }
    else
    {
        printf("The number is not present");
    }

    free(iptr);

    return 0;
}