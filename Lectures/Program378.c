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

void PreOrder(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t" , Head -> data);
        PreOrder(Head -> Lchild);
        PreOrder(Head -> Rchild);
    }
}

void PostOrder(PNODE Head)
{
    if(Head != NULL)
    {
        PostOrder(Head -> Lchild);
        PostOrder(Head -> Rchild);
        printf("%d\t" , Head -> data);
    }
}

void InOrder(PNODE Head)
{
    if(Head != NULL)
    {
        InOrder(Head -> Lchild);
        printf("%d\t" , Head -> data);
        InOrder(Head -> Rchild);
    }
}

int main()
{
    PNODE First = NULL;

    Insert(&First , 21);
    Insert(&First , 25);
    Insert(&First , 15);

    printf("Elements are (Preorder): \n");
    PreOrder(First);
    printf("\n");
    printf("Elements are (Postorder): \n");
    PostOrder(First);
    printf("\n");
    printf("Elements are (Inorder): \n");
    InOrder(First);

    return 0;
}