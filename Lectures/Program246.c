#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE , *PNODE , **PPNODE;

void Display(PNODE Head , PNODE Tail)
{
    if((Head != NULL) && (Tail != NULL))
    {
       do  
       {
        printf("%d\t" , (Head -> data));
        Head = Head -> next;
       }while(Head != Tail -> next);
       printf("\n");
    }
    else
    {
        printf("Linked list is empty \n");
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
       }while(Head != Tail -> next);

       return iCnt;
    }
    else
    {
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
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn -> next = *Head;
        (*Head) -> prev = newn;
        *Head = newn;
    }

    (*Tail) -> next = *Head;
    (*Head) -> prev = *Tail;
}

void InsertLast(PPNODE Head , PPNODE Tail , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail) -> next = newn;
        newn -> prev = *Tail;
        *Tail = newn;
    }

    (*Tail) -> next = *Head;
    (*Head) -> prev = *Tail;
}

void InsertAtPos(PPNODE Head , PPNODE Tail , int No , int iPos)
{
    int iLenght = 0;
    iLenght = Count(*Head , *Tail);
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
        free((*Head) -> prev);
        (*Tail) -> next = *Head;
        (*Head) -> prev = *Tail;
    }
}

void DeleteLast(PPNODE Head , PPNODE Tail)
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
        *Tail = (*Tail) -> prev;
        free((*Tail) -> next);
        (*Tail) -> next = *Head;
        (*Head) -> prev = *Tail;
    }
}

void DeleteAtPos(PPNODE Head , PPNODE Tail , int iPos)
{
    int iLenght = 0;
    iLenght = Count(*Head , *Tail);
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
        DeleteFirst(Head , Tail);
    }

    else if(iPos == iLenght)
    {
        DeleteLast(Head , Tail);
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
    PNODE First = NULL;
    PNODE Last = NULL;
    int iRet = 0;

    InsertFirst(&First , &Last , 51);
    InsertFirst(&First , &Last , 21);
    InsertFirst(&First , &Last , 11);

    InsertLast(&First , &Last , 101);
    InsertLast(&First , &Last , 121);
    InsertLast(&First , &Last , 131);

    Display(First , Last);
    iRet = Count(First , Last);
    printf("The number of elements are : %d\n" , iRet);

    DeleteFirst(&First , &Last);
    DeleteLast(&First , &Last);

    Display(First , Last);
    iRet = Count(First , Last);
    printf("The number of elements are : %d\n" , iRet);

    InsertAtPos(&First , &Last , 181 , 3);
    DeleteAtPos(&First , &Last , 2);

    Display(First , Last);
    iRet = Count(First , Last);
    printf("The number of elements are : %d\n" , iRet);

    return 0;
}