#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void Display(PNODE Head)
{
    printf("The elements are : \n");

    while(Head != NULL)
    {
        printf("|%d| -> " , Head -> data);
        Head = Head -> next;
    }
    printf("\n");
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

    newn->data = No; 
    newn->next = NULL; 

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head , int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No; 
    newn->next = NULL; 

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

    InsertFirst(&First , 51);
    InsertFirst(&First , 21);
    InsertFirst(&First , 11);

    InsertLast(&First , 101);
    InsertLast(&First , 121);
    InsertLast(&First , 151);

    Display(First);
    iRet = Count(First);

    printf("The count of elements is : %d" , iRet);

    return 0;
}