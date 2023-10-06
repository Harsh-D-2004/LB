#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node
{
    int data;
    struct Node * Rchild;
    struct Node * Lchild;
}NODE , *PNODE , **PPNODE;

void Insert(PPNODE Head , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *Head;

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
                printf("Element cannot be inserted as duplicate element present");
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

void DisplayPre(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t" , Head -> data);
        DisplayPre(Head -> Lchild);
        DisplayPre(Head -> Rchild);
    }
}

void DisplayPost(PNODE Head)
{
    if(Head != NULL)
    {
        DisplayPre(Head -> Lchild);
        DisplayPre(Head -> Rchild);
        printf("%d\t" , Head -> data);
    }
}

void DisplayIn(PNODE Head)
{
    if(Head != NULL)
    {
        DisplayPre(Head -> Lchild);
        printf("%d\t" , Head -> data);
        DisplayPre(Head -> Rchild);
    }
}

int CountNodes(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        iCnt++;
        CountNodes(Head -> Lchild);
        CountNodes(Head -> Rchild);
    }

    return iCnt;
}

int CountParentNodes(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if(Head -> Lchild != NULL || Head -> Rchild != NULL)
        {
            iCnt++;
        }
        CountNodes(Head -> Lchild);
        CountNodes(Head -> Rchild);
    }

    return iCnt;
}

int CountLeafNodes(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if(Head -> Lchild == NULL && Head -> Rchild == NULL)
        {
            iCnt++;
            CountNodes(Head -> Lchild);
            CountNodes(Head -> Rchild);
        }
    }

    return iCnt;
}

bool Search(PNODE Head , int No)
{
    bool flag = false;

    if(Head == NULL)
    {
        printf("Tree is empty \n");
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

int main()
{
    PNODE First = NULL;
    bool bRet = false;
    int iValue = 0;

    Insert(&First , 11);
    Insert(&First , 45);
    Insert(&First , 33);
    Insert(&First , 77);
    Insert(&First , 66);
    Insert(&First , 55);
    Insert(&First , 90);
    Insert(&First , 25);
    Insert(&First , 47);
    
    printf("The elements are : \n");
    DisplayPre(First);
    printf("\n");
    printf("The elements are : \n");
    DisplayPost(First);
    printf("\n");
    printf("The elements are : \n");
    DisplayIn(First);
    printf("\n");

    printf("The number of Nodes are : %d\n" , CountNodes(First));
    printf("The number of Parent Nodes are : %d\n" , CountParentNodes(First));
    printf("The number of Leaf Nodes are : %d\n" , CountLeafNodes(First));

    printf("Enter the value to be searched : \n");
    scanf("%d" , &iValue);

    bRet = Search(First , iValue);

    if(bRet == true)
    {
        printf("Element is present \n");
    }
    else
    {
        printf("Element is not present \n");
    }

    return 0;
}