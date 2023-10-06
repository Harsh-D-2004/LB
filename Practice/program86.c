#include<stdio.h>
#include<stdlib.h>

typedef struct  Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE , *PNODE , **PPNODE;

void Display(PNODE Head)
{
    printf("The elements are : \n");
    while(Head != NULL)
    {
        printf("%d\t" , (Head -> data));
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
    newn -> prev = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        (*Head) -> prev = newn;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    PNODE temp = NULL;
    temp = *Head;

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;

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
        newn -> prev = temp;
    }
}

void InsertAtPos(PPNODE Head , int No , int iPos)
{
    int iLenght = 0;
    iLenght = Count(*Head);

    PNODE temp = NULL;
    temp = *Head;
    PNODE newn = NULL;

    int iCnt = 0;

    if((iPos < 1) || (iPos > iLenght + 1))
    {
        printf("The position is invalid");
        return;
    }
    else if(iPos == 1)
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
        newn -> prev = NULL;

        for(iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
    }
}

void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)
    {
        return;
    }
    else if((*Head) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head) -> next;
        free((*Head) -> prev);
        (*Head) -> prev = NULL;
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
        *Head = NULL;
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

    PNODE temp = NULL;
    temp = *Head;

    int iCnt = 0;

    if((iPos < 1) || (iPos > iLenght))
    {
        printf("The position is invalid \n");
        return;
    }
    else if(iPos == 1)
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
        temp -> next = temp -> next -> next;
        free(temp -> next -> prev);
        temp -> next -> prev = temp;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First , 51);
    InsertFirst(&First , 21);
    InsertFirst(&First , 11);

    InsertLast(&First , 101);
    InsertLast(&First , 121);
    InsertLast(&First , 131);

    Display(First);

    iRet = Count(First);
    printf("The number of elements are : %d\n" , iRet);

    DeleteFirst(&First);
    DeleteLast(&First);

    Display(First);

    iRet = Count(First);
    printf("The number of elements are : %d\n" , iRet);

    InsertAtPos(&First , 131 , 2);
    InsertAtPos(&First , 151 , 3);
    DeleteAtPos(&First , 4);

    Display(First);

    iRet = Count(First);
    printf("The number of elements are : %d\n" , iRet);

    return 0;
}