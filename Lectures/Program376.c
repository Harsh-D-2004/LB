//Binary Search Tree

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node * Lchild;
    struct Node * Rchild;
}NODE , *PNODE , **PPNODE;

void Insert(PPNODE Head , int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> Lchild = NULL;
    newn -> Rchild = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(1)
        {
            if(No == temp -> data)
            {
                printf("Duplicate element : Unable to Insert \n");
                free(newn);
                break;
            }
            else if(No > temp -> data)
            {
                if(temp -> Rchild == NULL)
                {
                    temp -> Rchild = newn;
                    break;
                }
                temp = temp -> Rchild;
            }
            else if(No < temp -> data)
            {
                if(temp -> Lchild == NULL)
                {
                    temp -> Lchild = newn;
                    break;
                }
                temp = temp -> Lchild;
            }
        }
    }
}

void Display(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t" , Head -> data);
        Display(Head -> Lchild);
        Display(Head -> Rchild);
    }
}

int main()
{
    PNODE First = NULL;

    Insert(&First , 21);
    Insert(&First , 25);
    Insert(&First , 15);

    printf("Elements are : \n");
    Display(First);

    return 0;
}