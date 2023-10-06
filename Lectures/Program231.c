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
    while(Head != NULL)
    {
        printf("|%d|-> " , (Head -> data));
        Head = Head -> next;
    }
    printf("NULL\n");
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
        PNODE temp = NULL;
        temp = *Head;

        while (temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }

            
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

    InsertFirst(&First , 51);
    InsertFirst(&First , 21);
    InsertFirst(&First , 11);

    Display(First);

    return 0;
}