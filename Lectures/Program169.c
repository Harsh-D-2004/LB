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

}

int Count(PNODE Head)
{
    return 0;
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
        
    }
}

void InsertAtPos(PPNODE Head , int No , int iPos)
{

}   

void DeleteFirst(PPNODE Head)
{

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

    InsertFirst(&First , 11);
    InsertFirst(&First , 21);
    InsertFirst(&First , 51);

    return 0;
}