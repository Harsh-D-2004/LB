#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE , *PNODE , **PPNODE;

class SinglyLL
{
    private:
        PNODE First;
        int iCount;

    public:

        SinglyLL();
        ~SinglyLL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No , int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

//Implementation of all behaviours

    // Returnvalue_ClassName :: FunctionName(Parameter_List)
    // {
    //     Body
    // }

void SinglyLL :: InsertFirst(int No)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn -> data = No;
    newn -> next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn -> next = newn;
        First = newn;
    }
    iCount++;
}

void SinglyLL :: InsertLast(int No)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn -> data = No;
    newn -> next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = NULL;
        temp = First;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}


void SinglyLL :: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = First;

        First = First -> next;
        delete temp;
    }
    iCount--;
}

void SinglyLL :: DeleteLast()
{
        if(First == NULL)
    {
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = First;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
    }
    iCount--;
}


void SinglyLL :: Display()
{
    PNODE temp = NULL;
    temp = First;

    cout<<"The elements are : "<<"\n";

    while(temp != NULL)
    {
        cout<<temp -> data<<"\t";
        temp = temp -> next;
    }
    cout<<"NULL"<<"\n";
}

int SinglyLL :: Count()
{
    return iCount;
}

SinglyLL ::SinglyLL()
{
    cout<<"Inside constructor \n";
    First = NULL;
    iCount = 0;
}

SinglyLL ::~SinglyLL()
{
    cout<<"Inside Destructor \n";
}

void SinglyLL :: InsertAtPos(int No , int iPos)
{
    if((iPos < 1) && (iPos > iCount + 1))
    {
        cout<<"Invalid psition \n";
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        PNODE temp = NULL;
        temp = First;

        for(int iCnt = 1 ; iCnt = iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }

        PNODE newn = new NODE;

        newn -> data = No;
        newn -> next = NULL;

        newn -> next = temp -> next;
        temp -> next = newn;
        iCount++;
    }
}

void SinglyLL :: DeleteAtPos(int iPos)
{
    if((iPos < 1) && (iPos > iCount))
    {
        cout<<"Invalid psition \n";
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = NULL;
        temp = First;

        for(int iCnt = 1 ; iCnt = iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }

        PNODE tempx = temp -> next;
        temp -> next = tempx -> next;
        delete tempx;
    }
}

int main()
{
    int iRet = 0;

    SinglyLL obj1;           

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.InsertLast(101);
    obj1.InsertLast(121);
    obj1.InsertLast(131);

    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.InsertAtPos(105 , 4);

    obj1.Display();
    iRet = obj1.Count();

    cout<<"The number of elements is : "<<iRet<<"\n";

    return 0;
}