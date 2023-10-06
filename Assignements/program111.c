#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef struct Node
{
    int data;
    struct Node *next;
} NODE , *PNODE , **PPNODE;

void Display(PNODE Head)
{
    printf("The elements are : ");

    while(Head != NULL)
    {
        printf("|%d| -> " , Head -> data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    return iCnt;
}

void InsertFirst(PPNODE Head , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head , int No)
{
    PNODE temp = NULL;
    temp = *Head;
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;    
    }
}

void InsertAtPos(PPNODE Head , int iPos , int No)
{
    int iLenght = 0;
    iLenght = Count(*Head);
    int iCnt = 0;
    PNODE temp = NULL;
    temp = *Head;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > iLenght + 1))
    {
        printf("Invalid position \n");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(Head , No);
    }
    else if(iPos == iLenght + 1)
    {
        InsertLast(Head , No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = No;
        newn -> next = NULL;

        for(iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = NULL;
    temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head) -> next == NULL)
    {
        free(*Head);
    }
    else
    {
        *Head = temp -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = NULL;
    temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head) -> next == NULL)
    {
        free(*Head);
    }
    else
    {
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next = NULL;
    }
}

void DeleteAtPos(PPNODE Head , int iPos)
{
    int iLenght = 0;
    iLenght = Count(*Head);
    int iCnt = 0;
    PNODE temp = NULL;
    temp = *Head;
    PNODE tempx = NULL;

    if((iPos < 1) || (iPos > iLenght + 1))
    {
        printf("Invalid position \n");
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == iLenght + 1)
    {
        DeleteLast(Head);
    }
    else
    {
        for(iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }
        tempx = temp -> next;
        temp -> next = temp -> next -> next;
        free(tempx);
    }
}

int SecMax(PNODE Head)
{
    int iMax1 , iMax2 = INT_MIN;

    while(Head != NULL)
    {
        if((Head -> data) > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = Head -> data;
        }
        else if((Head -> data) > iMax2 && (Head -> data) < iMax1)
        {
            iMax2 = Head -> data;
        }
        Head = Head -> next;
    }
    return iMax2;
}

int main()
{
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First , 101);
    InsertFirst(&First , 6);
    InsertFirst(&First , 21);
    InsertFirst(&First , 11);

    InsertLast(&First , 28);
    InsertLast(&First , 131);

    Display(First);

    iRet = SecMax(First);
    printf("The second max is : %d\n" , iRet);

    return 0;
}