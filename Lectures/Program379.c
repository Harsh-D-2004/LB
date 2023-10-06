//Binary Search Tree

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool Search(PNODE Head , int No)
{
    bool flag = false;

    if(Head == NULL)
    {
        printf("Tree is empty\n");
        return flag;
    }
    while(Head != NULL)
    {
        if(No == Head -> data)
        {
            flag = true;
            break;
        }
        else if(No > Head -> data)
        {
            Head = Head -> Rchild;
        }
        else if(No < Head -> data)
        {
            Head = Head -> Lchild;
        }
    }
    return flag;
}

int CountNodes(PNODE Head)
{
    static int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        CountNodes(Head -> Lchild);
        CountNodes(Head -> Rchild);
    }
}

int CountLeafNodes(PNODE Head)
{
    static int iCnt = 0;
    while(Head != NULL)
    {
        if((Head -> Lchild == NULL) && (Head -> Rchild == NULL))
        {
            iCnt++;
        }
        CountLeafNodes(Head -> Lchild);
        CountLeafNodes(Head -> Rchild);
    }
}

int CountParentNodes(PNODE Head)
{
    static int iCnt = 0;
    while(Head != NULL)
    {
        if((Head -> Lchild != NULL) || (Head -> Rchild != NULL))
        {
            iCnt++;
        }
        CountParentNodes(Head -> Lchild);
        CountParentNodes(Head -> Rchild);
    }
}

int main()
{
    PNODE First = NULL;
    bool bRet = false;
    int iValue = 0;

    Insert(&First , 21);
    Insert(&First , 25);
    Insert(&First , 15);
    Insert(&First , 78);
    Insert(&First , 56);
    Insert(&First , 10);
    Insert(&First , 55);
    Insert(&First , 34);
    Insert(&First , 20);

    printf("Elements are (Preorder): \n");
    PreOrder(First);
    printf("\n");
    printf("Elements are (Postorder): \n");
    PostOrder(First);
    printf("\n");
    printf("Elements are (Inorder): \n");
    InOrder(First);
    printf("\n");

    printf("Number of Nodes are : %d\n" , CountNodes(First));
    printf("Number of Leaf Nodes are : %d\n" , CountLeafNodes(First));
    printf("Number of Parent Nodes are : %d\n" , CountParentNodes(First));

    printf("Enter the element to be searched : \n");
    scanf("%d" , &iValue);

    bRet = Search(First , iValue);

    if(bRet == true)
    {
        printf("Element is there in BST \n");
    }
    else
    {
        printf("Element is not there in BST \n");
    }


    return 0;
}