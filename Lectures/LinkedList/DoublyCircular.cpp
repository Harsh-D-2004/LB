#include<iostream>
using namespace std;

typedef class Node
{
    public:

        int data;
        Node *next;
        Node *prev;

        Node()
        {
            data = 0;
            next = NULL;
            prev = NULL;
        }
    
        Node(int iValue)
        {
            data = iValue;
            next = NULL;
            prev = NULL;
        }
}NODE , *PNODE;

class LinkedList
{
    public:
        PNODE First;
        int iCount;

        LinkedList()
        {
            First = NULL;
            iCount = 0;
        }

        virtual void InsertFirst(int No) = 0; 
        virtual void InsertLast(int No) = 0;
        virtual void InsertAtPos(int No , int iPos) = 0;

        virtual void DeleteFirst() = 0; 
        virtual void DeleteLast() = 0;
        virtual void DeleteAtPos(int iPos) = 0;

        void Display()
        {
            int iCnt = 0;
            PNODE temp = NULL;
            temp = First;

            cout<<"The elements of LL are : \n";

            for(iCnt = 1 ; iCnt <= iCount ; iCnt++)
            {
                cout<<temp -> data<<"\t";
                temp = temp -> next;
            }
            cout<<"\n";
        }

        int Count()
        {
            return iCount;
        }
};

class DoublyCircularLL : public LinkedList
{
    private:
        PNODE Last;

    public:
        DoublyCircularLL();

        ~DoublyCircularLL();

        void InsertFirst(int No); 
        void InsertLast(int No);
        void InsertAtPos(int No , int iPos);

        void DeleteFirst(); 
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyCircularLL :: DoublyCircularLL()
{
    Last = NULL;
}

DoublyCircularLL :: ~DoublyCircularLL()
{

}

void DoublyCircularLL :: InsertFirst(int No)
{
    PNODE newn = new NODE(No);

    if(First == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn -> next = First;
        First -> prev = newn;
        First = newn;
    }
    Last -> next = First;
    First -> prev = Last;
    iCount++;
}

void DoublyCircularLL :: InsertLast(int No)
{
    PNODE newn = new NODE(No);

    if(First == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn -> prev = Last;
        Last -> next = newn;
        Last = newn;
    }
    Last -> next = First;
    First -> prev = Last;
    iCount++;
}


void DoublyCircularLL :: DeleteFirst()
{
    if(iCount == 0)
    {
        return;
    }
    else if(iCount == 1)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First -> next;
        delete First -> prev;
    }
    First -> prev = Last;
    Last -> next = First;
    iCount--;
}

void DoublyCircularLL :: DeleteLast()
{
    if(iCount == 0)
    {
        return;
    }
    else if(iCount == 1)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        Last = Last -> prev;
        delete Last -> next;
    }
    First -> prev = Last;
    Last -> next = First;
    iCount--;
}

void DoublyCircularLL :: InsertAtPos(int No , int iPos)
{
    if((iPos < 1) && (iPos > iCount + 1))
    {
        cout<<"Invalid Pos"<<"\n";
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

        for(int iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }
        PNODE newn = new NODE(No);

        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
        iCount++;
    }
}

void DoublyCircularLL :: DeleteAtPos(int iPos)
{
    if((iPos < 1) && (iPos > iCount))
    {
        cout<<"Invalid Pos"<<"\n";
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

        for(int iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }
        temp -> next = temp -> next -> next;
        delete temp -> next -> prev;
        temp -> next -> prev = temp;
        iCount--;
    }
}

int main()
{
    DoublyCircularLL obj;
    int iValue = 0;
    int iChoice = 0;
    int iPosition = 0;
    int iRet = 0;

    cout<<"Doubly Circular Linked List \n";

    while(1)
    {
        cout<<"---------------------------------------------\n";

        cout<<"1 : Insert Node in First Position \n";
        cout<<"2 : Insert Node in Last Position \n";
        cout<<"3 : Insert Node in Given Position \n";
        cout<<"4 : Delete Node in First Position \n";
        cout<<"5 : Delete Node in Last Position \n";
        cout<<"6 : Delete Node in Given Position \n";
        cout<<"7 : Display all the elements \n";
        cout<<"8 : Count all the elements \n";
        cout<<"0 : Terminate the application \n";

        cout<<"----------------------------------------------\n";

        cout<<"Enter the choice : \n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value : \n";
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;

            case 2:
                cout<<"Enter the value : \n";
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter the value : \n";
                cin>>iValue;
                cout<<"Enter the Posittion : \n";
                cin>>iPosition;
                obj.InsertAtPos(iValue , iPosition);
                break;

            case 4:
                obj.DeleteFirst();
                break;

            case 5:
                obj.DeleteLast();
                break;

            case 6:
                cout<<"Enter the Posittion : \n";
                cin>>iPosition;
                obj.DeleteAtPos(iPosition);
                break;

            case 7:
                obj.Display();
                break;

            case 8: 
                iRet = obj.Count();
                cout<<"The number of elements in linked list are : "<<iRet<<"\n";
                break;

            case 0:
                cout<<"Thankyou for using the application \n";
                return 0;
        }
    }
    return 0;
}