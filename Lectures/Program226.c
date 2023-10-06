#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");

    while(Head != NULL)
    {
        printf("|%d| -> " , Head->data);
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

    //Allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));

    //Initialize the node
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

    //Allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));

    //Initialize the node
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

void InsertAtPos(PPNODE Head , int No , int Pos)
{
    
}

void DeleteFirst(PPNODE Head)
{

}

void DeleteLast(PPNODE  Head)
{
    
}

void DeleteAtPos(PPNODE Head , int Pos)
{
    
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First , 111);       //InsertFirst(60 , 111)
    InsertFirst(&First , 101);       //InsertFirst(60 , 101)
    InsertFirst(&First , 51);       //InsertFirst(60 , 51)
    InsertFirst(&First , 21);       //InsertFirst(60 , 21)
    InsertFirst(&First , 11);       //InsertFirst(60 , 11)

    InsertLast(&First , 121);       //InsertFirst(60 , 11)
    InsertLast(&First , 151);       //InsertFirst(60 , 11)

    Display(First);
    iRet = Count(First);

    printf("The count of Nodes is : %d\n" , iRet);

    return 0;
}