#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node * next;

}NODE , *PNODE , **PPNODE;

void Display(PNODE Head)
{
    printf("The elements are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> " , Head -> data);
        Head = Head -> next;
    }
    printf("NULL \n");
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
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        temp = *Head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
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
    PNODE First = NULL;
    int iRet = 0;

    InsertLast(&First , 11);
    InsertLast(&First , 21);
    InsertLast(&First , 51);
    InsertLast(&First , 101);

    InsertFirst(&First , 10);
    InsertFirst(&First , 20);

    Display(First);

    iRet = Count(First);
    printf("The count of elements is : %d\n" , iRet);

    return 0;
}