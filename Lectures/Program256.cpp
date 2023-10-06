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
    SinglyLL obj;

    int iChoice = 0;
    int iValue = 0;
    int iPosition = 0;

    cout<<"Linked list application \n";

    while(1)
    {
        cout<<"-------------------------------------------\n";

        cout<<"Please enter ur choice : \n";   

        cout<<" 1 : Insert Node at first Pos\n";
        cout<<" 2 : Insert Node at Last Pos\n";
        cout<<" 3 : Insert Node at given Pos\n";
        cout<<" 4 : Delete Node at first Pos\n";
        cout<<" 5 : Delete Node at Last Pos\n";
        cout<<" 6 : Delete Node at given Pos\n";
        cout<<" 7 : Display elements of Linked List\n";
        cout<<" 8 : Count the number of elements\n";
        cout<<" 9 : Terminate the application\n";

        cout<<"Enter ur choice : \n";
        cin>>iChoice;

        cout<<"-------------------------------------------\n";

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the the value : \n";
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;

            case 2:
                cout<<"Enter the the value : \n";
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter the the value : \n";
                cin>>iValue;
                cout<<"Enter the position : \n";
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
                cout<<"Enter the position : \n";
                cin>>iPosition;
                obj.DeleteAtPos(iPosition);
                break;

            case 7:
                obj.Display();
                break;

            case 8:
                cout<<"The number of elements are : "<<obj.Count()<<"\n";
                break;

            case 9:
                cout<<"Thankyou for using the application\n";
                return 0;
            
            default:
                cout<<"Invalid choice \n";
                break;
        }
    }
    return 0;
}