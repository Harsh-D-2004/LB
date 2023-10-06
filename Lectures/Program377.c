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

void DisplayI(PNODE Head)
{
    printf("Elements of linked list are : \n");

    while(Head != NULL)
    {
        printf("%d\t" , Head->data);
        Head = Head -> next;
    }
}

void DisplayR(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t" , Head->data);
        Head = Head -> next;
        DisplayR(Head);
    }
}

int CountI(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    return iCnt;
}

int CountR(PNODE Head)
{
    static int iCnt = 0;
    if(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
        CountR(Head);
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

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First , 50);      
    InsertFirst(&First , 40);       
    InsertFirst(&First , 30);       
    InsertFirst(&First , 20);       
    InsertFirst(&First , 10);           

    DisplayI(First);
    printf("\n");
    DisplayR(First);

    iRet = CountR(First);

    printf("The number of elements are : %d\n" , iRet);

    return 0;
}