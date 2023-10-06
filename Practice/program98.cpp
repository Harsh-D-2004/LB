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

class Stack
{   private:
        PNODE First;
        int iCount;
        
    public:
        Stack()
        {
            First = NULL;
            iCount = 0;
        }

        void PUSH(int iNo)
        {
            PNODE temp = NULL;
            temp = First;
            
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }

            PNODE newn = new NODE(iNo);

            temp -> next = newn;
            iCount++;
        }

        int POP()
        {
            PNODE temp = First;
            int iValue = 0;

            First = First -> next;
            iValue = temp -> data;
            delete temp;
            iCount--;

            return iValue;
        }

        void Display()
        {
            PNODE temp = NULL;
            temp = First;

            for(int iCnt  = 1 ; iCnt <= iCount ; iCnt++)
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

int main()
{
    Stack obj;

    obj.PUSH(11);
    obj.PUSH(21);
    obj.PUSH(51);

    cout<<"The popped element is : "<<obj.POP()<<"\n";

    obj.Display();

    cout<<"The number of elements in stack are : "<<obj.Count()<<"\n";

    return 0;
}