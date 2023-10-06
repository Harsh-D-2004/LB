#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;      //#
} NODE , *PNODE , **PPNODE;

void Display(PNODE Head)
{
    printf("NULL <-> ");
    while(Head != NULL)
    {
        printf("| %d|<-> " , (Head -> data));
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
    newn -> prev = NULL;        //#

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        (*Head) -> prev = newn;     //#
        newn -> next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;        //#

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        PNODE temp = NULL;
        temp = *Head;

        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        newn -> prev = temp;    //#
        temp -> next = newn;
    }
}

void InsertAtPos(PPNODE Head , int No , int iPos)
{
    int iLenght = 0;
    iLenght = Count(*Head);
    int iCnt = 0;

    PNODE temp = NULL;
    temp = *Head;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > iLenght + 1))
    {
        printf("The position is invalid \n");
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
        newn -> prev = NULL;        //#

        for(iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;    //#
        temp -> next = newn;
        newn -> prev = temp;      //#
    }
}   

void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)
    {
        return;
    }
    else if ((*Head) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head) -> next;
        free((*Head) -> prev);      //#
        (*Head) -> prev = NULL;     //#
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
    else if ((*Head) -> next == NULL)
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
    int iCnt = 0;

    PNODE temp = NULL;
    temp = *Head;

    if((iPos < 1) || (iPos > iLenght))
    {
        printf("The position is invalid \n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(Head);
    }

    else if(iPos == iLenght)
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
        free(temp -> next -> prev);     //#
        temp -> next -> prev = temp;    //#
    }
}


int main()
{
    PNODE *First = NULL;
    int iRet = 0;

    InsertFirst(&First , 101);
    InsertFirst(&First , 51);
    InsertFirst(&First , 21);
    InsertFirst(&First , 11);

    InsertLast(&First , 111);
    InsertLast(&First , 121);

    Display(First);
    iRet = Count(First);
    printf("The number of elements are : %d\n" , iRet);

    DeleteFirst(&First);
    DeleteLast(&First);

    Display(First);
    iRet = Count(First);
    printf("The number of elements are : %d\n" , iRet);

    InsertAtPos(&First , 77 , 2);
    InsertAtPos(&First , 99 , 3);

    Display(First);
    iRet = Count(First);
    printf("The number of elements are : %d\n" , iRet);

    DeleteAtPos(&First , 2);

    Display(First);
    iRet = Count(First);
    printf("The number of elements are : %d\n" , iRet);

    return 0;
}