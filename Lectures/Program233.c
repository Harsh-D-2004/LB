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
        newn -> prev = temp;
        temp -> next = newn;
    }
}

void InsertAtPos(PPNODE Head , int No , int iPos)
{

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
        free((*Head) -> prev);
        (*Head) -> prev = NULL;
    }
}

void DeleteLast(PPNODE Head)
{

}

void DeleteAtPos(PPNODE Head , int iPos)
{

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

    Display(First);
    iRet = Count(First);
    printf("The number of elements are : %d\n" , iRet);

    return 0;
}