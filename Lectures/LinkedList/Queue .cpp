#include<iostream>
using namespace std;

typedef class Node
{
    public:

        int data;
        Node *next;

        Node(int iValue)
        {
            data = iValue;
            next = NULL;
        }
}NODE , *PNODE;

class Queue
{
    private:    
        PNODE First;
        int iCount;
    
    public:
        Queue();
        void Enqueue(int iNo); //InsertLast
        int Dequeue();      //DeleteFirst
        void Display();
        int Count();
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

void Queue :: Enqueue(int iNo)     //Insertlast()
{
    PNODE newn = new NODE(iNo);
    PNODE temp = NULL;
    temp = First;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}

int Queue :: Dequeue()     //DeleteFirst()
{
    PNODE temp = NULL;
    int iValue = 0;

    if(First == NULL)
    {
        cout<<"Stack is empty \n";
        return -1;
    }
    else if(First -> next == NULL)
    {
        iValue = First -> data;
        delete First;
    }
    else
    {
        temp = First;
        iValue = First -> data;
        First = First -> next;
        delete temp;
    }
    iCount--;
    return iValue;
}

void Queue :: Display()
{
    if(First == NULL)
    {
        cout<<"Queue is empty \n";
        return;
    }

    cout<<"Elements of Queue are : \n";

    PNODE temp = First;

    for(int iCnt = 1 ; iCnt <= iCount ; iCnt++)
    {
        cout<<temp -> data<<"\n";
        temp = temp -> next;
    }
}

int Queue :: Count()
{
    return iCount;
}

int main()
{
    Queue obj;
    
    int iChoice = 1;
    int iValue = 0;
    int iRet = 0;

    cout<<"-----------------------------------------------\n";
    cout<<"Dynamic implementation of Queue \n";
    cout<<"-----------------------------------------------\n";

    while(iChoice != 0)
    {
        cout<<"-----------------------------------------------\n";

        cout<<"Please enetr the option : \n";

        cout<<"1 : Push element into Queue\n";
        cout<<"2 : Pop element from Queue\n";
        cout<<"3 : Display elements from Queue\n";
        cout<<"4 : Count elements from Queue\n";
        cout<<"0 : Terminate the application\n";

        cout<<"-----------------------------------------------\n";

        cout<<"Please enter the option : \n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the element that you want to push : \n";
                cin>>iValue;
                obj.Enqueue(iValue);
                break;
            
            case 2:
                iRet = obj.Dequeue();
                if(iRet != -1)
                {
                    cout<<"Popped element from queue is : "<<iRet<<"\n";
                }
                break;

            case 3:
                obj.Display();
                break;
            
            case 4:
                cout<<"The number of elements is : "<<obj.Count()<<"\n";
                break;
            
            case 0:
                cout<<"Thankyou for using application \n";
                break;

            default:
                cout<<"Enter valid option \n";
                break;
        }
    }
    return 0;
}