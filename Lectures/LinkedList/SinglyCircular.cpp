#include<iostream>
using namespace std;

typedef class Node
{
    public:

        int data;
        Node *next;

        Node()
        {
            data = 0;
            next = NULL;
        }
        Node(int iValue)
        {
            data = iValue;
            next = NULL;
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

        void Display()
        {
            PNODE temp = NULL;
            temp = First;

            for(int iCnt = 1 ; iCnt <= iCount ; iCnt++)
            {
                cout<<temp -> data<<"\t";
                temp = temp -> next;
            }
            printf("\n");
        }

        int Count()
        {
            return iCount;
        }

        virtual void InsertFirst(int iNo) = 0;
        virtual void InsertLast(int iNo) = 0;
        virtual void InsertAtPos(int iNo , int iPos) = 0;

        virtual void DeleteFirst() = 0;
        virtual void DeleteLast() = 0;
        virtual void DeleteAtPos(int iPos) = 0;
};

class SinglyCircularLL : public LinkedList
{
    private :
        PNODE Last;

    public:

        SinglyCircularLL();
        ~SinglyCircularLL();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo , int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCircularLL :: SinglyCircularLL()
{
    Last = NULL;
}

SinglyCircularLL :: ~SinglyCircularLL()
{

}

void SinglyCircularLL :: InsertFirst(int iNo)
{
    PNODE newn = new NODE(iNo);

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn -> next = First;
        First = newn;
    }
    Last -> next = First;
    iCount++;
}

void SinglyCircularLL :: InsertLast(int iNo)
{
    PNODE newn = new NODE(iNo);

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last -> next = newn;
        Last = newn;
    }
    Last -> next = First;
    iCount++;
}

void SinglyCircularLL :: InsertAtPos(int iNo , int iPos)
{
    if((iPos < 1) && (iPos > iCount + 1))
    {
        cout<<"Invalid Position \n";
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == (iCount + 1))
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE temp = NULL;
        temp = First;

        for(int iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }

        PNODE newn = new NODE(iNo);

        newn -> next = temp -> next;
        temp -> next = newn;
    }
    iCount++;
}

void SinglyCircularLL :: DeleteFirst()
{
    if((First == NULL) && (Last == NULL))
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First -> next;
        delete Last -> next;
        Last -> next = First;
    }
    iCount--;
}

void SinglyCircularLL :: DeleteLast()
{
    if((First == NULL) && (Last == NULL))
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = First;
        
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        Last = temp;
        delete temp -> next;
        Last -> next = First;
    }
    iCount--;
}

void SinglyCircularLL :: DeleteAtPos(int iPos)
{
    if((iPos < 1) && (iPos > iCount))
    {
        cout<<"Invalid Position \n";
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == (iCount))
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

        PNODE tempx = NULL;

        tempx = temp -> next;
        temp -> next = tempx -> next;
        delete tempx;
    }
    iCount--;  
}

int main()
{
    SinglyCircularLL obj;

    int iValue = 0;
    int iChoice = 0;
    int iPosition = 0;
    int iRet = 0;

    cout<<"Singly Circular Linked List \n";

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