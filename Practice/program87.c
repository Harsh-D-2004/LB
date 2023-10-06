#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE , *PNODE , **PPNODE;

void Display(PNODE Head , PNODE Tail)
{
    if((Head != NULL) && (Tail != NULL))
    {
        do
        {   
            printf("%d\t" , (Head -> data));
            Head = Head -> next;
        } while (Head != Tail -> next);
        printf("\n");
    }
    else
    {
        printf("Linked List is empty \n");
    }
}

int Count(PNODE Head , PNODE Tail)
{
    int iCnt = 0;

    if((Head != NULL) && (Tail != NULL))
    {
        do
        {   
            iCnt++;
            Head = Head -> next;
        } while (Head != Tail -> next);
        return iCnt;
    }
    else
    {
        printf("Linked List is empty \n");
        return 0;
    }
}

void InsertFirst(PPNODE Head , PPNODE Tail , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        newn -> next = newn;
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
        (*Tail) -> next = *Head;
    }
}

void InsertLast(PPNODE Head , PPNODE Tail , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        newn -> next = newn;
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail) -> next = newn;
        *Tail = newn;
        (*Tail) -> next = *Head;
    }
}

void InsertAtPos(PPNODE Head , PPNODE Tail , int No , int iPos)
{
    int iLenght = 0;
    iLenght = Count(*Head , *Tail);

    PNODE newn = NULL;
    PNODE temp = NULL;
    temp = *Head;

    if((iPos < 1) && (iPos > iLenght + 1))
    {
        printf("Enter the valid position \n");
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(Head , Tail , No);
    }
    else if(iPos == iLenght + 1)
    {
        InsertLast(Head , Tail , No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = No;
        newn -> next = NULL;
        
        int iCnt = 0;
        for(iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

void DeleteFirst(PPNODE Head , PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head) -> next;
        free((*Tail) -> next);
        (*Tail) -> next = (*Head);
    }
}

void DeleteLast(PPNODE Head , PPNODE Tail)
{
    PNODE temp = NULL;
    temp = *Head;

    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        while(temp -> next -> next != *Head)
        {
            temp = temp -> next;
        }
        *Tail = temp;
        free(temp -> next);
        (*Tail) -> next = *Head; 
    }
}

void DeleteAtPos(PPNODE Head  , PPNODE Tail , int iPos)
{
    int iLenght = 0;
    iLenght = Count(*Head , *Tail);

    PNODE temp = NULL;
    PNODE tempx = NULL;
    temp = *Head;

    if((iPos < 1) && (iPos > iLenght))
    {
        printf("Enter the valid position \n");
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst(Head , Tail);
    }
    else if(iPos == iLenght + 1)
    {
        DeleteLast(Head , Tail);
    }
    else
    {
        int iCnt = 0;
        for(iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
        {
            temp = temp -> next;
        }
        tempx = temp -> next;
        temp -> next = temp -> next -> next;
        free(tempx);
    }
}

int main()
{
    PNODE *First = NULL;
    PNODE *Last = NULL;
    int iRet = 0;

    InsertFirst(&First , &Last , 51);
    InsertFirst(&First , &Last , 21);
    InsertFirst(&First , &Last , 11);

    InsertLast(&First , &Last , 101);
    InsertLast(&First , &Last , 111);
    InsertLast(&First , &Last , 121);

    Display(First , Last);
    iRet = Count(First , Last);

    printf("The number of elements are : %d\n" , iRet);

    DeleteFirst(&First , &Last);
    DeleteLast(&First , &Last);

    Display(First , Last);
    iRet = Count(First , Last);

    printf("The number of elements are : %d\n" , iRet);

    InsertAtPos(&First , &Last , 171 , 3);
    InsertAtPos(&First , &Last , 191 , 4);
    DeleteAtPos(&First , &Last , 3);

    Display(First , Last);
    iRet = Count(First , Last);

    printf("The number of elements are : %d\n" , iRet);

    return 0;
}