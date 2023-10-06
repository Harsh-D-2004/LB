#include<iostream>
using namespace std;
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//Strcuture of Singly Linked List
////////////////////////////////////////////////////////////////
template <class T>
struct NodeS
{
    T data;
    struct NodeS *next;

    NodeS()
        {
            data = 0;
            next = NULL;
        }

    NodeS(int iValue)
        {
            data = iValue;
            next = NULL;
        }
};
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//Strcuture of Doubly Linked List
////////////////////////////////////////////////////////////////
template <class T>
struct NodeD
{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//Class of Singly Linear Linked List
////////////////////////////////////////////////////////////////
template <class T>
class SinglyLL
{
    public:
        struct NodeS<T> *First;
        int iCount;

        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T , int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
template <class T>
SinglyLL <T>:: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL <T>:: Display()
{
    struct NodeS <T>* temp = NULL;
    temp = First;
    cout<<"The elements of LinkedList are: \n";
    for(int iCnt = 1 ; iCnt <= iCount ; iCnt++)
    {
        cout<<temp -> data<<"\t";
        temp = temp -> next;
    }
    cout<<"\n";
}

template <class T>
int SinglyLL <T>:: Count()
{
    return iCount;
}

template <class T>
void SinglyLL <T>:: InsertFirst(T no)
{
    struct NodeS <T>* newn = new struct NodeS <T> (no);

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn -> next = First;
        First = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL <T>:: InsertLast(T no)
{
    struct NodeS <T>* newn = new struct NodeS <T> (no);

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct NodeS <T>* temp = First;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL <T>:: InsertAtPos(T no , int iPos)
{
    if((iPos < 1) && (iPos > iCount + 1))
    {
        cout<<"Invalid position \n";
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        struct NodeS <T>* temp = First;
        for(int iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }
        struct NodeS <T>* newn = new struct NodeS <T> (no);

        newn -> next = temp -> next;
        temp -> next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL <T>:: DeleteFirst()
{
    if(iCount == 0)
    {
        return;
    }
    else if(iCount == 1)
    {
        delete First;
        First = NULL;
    }
    else
    {
        struct NodeS <T>* temp = First;
        First = First -> next;
        delete temp;
    }
    iCount--;
}

template <class T>
void SinglyLL <T>:: DeleteLast()
{
    if(iCount == 0)
    {
        return;
    }
    else if(iCount == 1)
    {
        delete First;
        First = NULL;
    }
    else
    {
        struct NodeS <T>* temp = First;
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
    }
    iCount--;
}

template <class T>
void SinglyLL <T>:: DeleteAtPos(int iPos)
{
    if((iPos < 1) && (iPos > iCount))
    {
        cout<<"Invalid position \n";
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct NodeS <T>* temp = First;
        for(int iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }
        struct NodeS <T>* tempx = temp -> next;
        temp -> next = tempx -> next;
        delete tempx;
    }
    iCount++;
}
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//Class of Singly Circular Linked List
////////////////////////////////////////////////////////////////
template <class T>
class SinglyCL
{
    public:
        struct NodeS<T> *First;
        struct NodeS<T> *Last;
        int iCount;

        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T , int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
template <class T>
SinglyCL <T>:: SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL <T>:: Display()
{
    struct NodeS <T>* temp = NULL;
    temp = First;

    for(int iCnt = 1 ; iCnt <= iCount ; iCnt++)
    {
        cout<<temp -> data<<"\t";
        temp = temp -> next;
    }
    printf("\n");
}

template <class T>
int SinglyCL <T>:: Count()
{
    return iCount;
}

template <class T>
void SinglyCL <T>:: InsertFirst(T no)
{
    struct NodeS <T> * newn = new struct NodeS <T> (no);

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

template <class T>
void SinglyCL <T>:: InsertLast(T no)
{
    struct NodeS <T> * newn = new struct NodeS <T> (no);

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

template <class T>
void SinglyCL <T>:: InsertAtPos(T no , int iPos)
{
    if((iPos < 1) && (iPos > iCount + 1))
    {
        cout<<"Invalid Position \n";
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == (iCount + 1))
    {
        InsertLast(no);
    }
    else
    {
        struct NodeS <T> * temp = NULL;
        temp = First;

        for(int iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }

        struct NodeS <T> * newn = new struct NodeS <T> (no);

        newn -> next = temp -> next;
        temp -> next = newn;
    }
    iCount++;
}

template <class T>
void SinglyCL <T>:: DeleteFirst()
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

template <class T>
void SinglyCL <T>:: DeleteLast()
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
        struct NodeS <T>*  temp = NULL;
        temp = First;
        
        while(temp -> next -> next != NULL)
        {
            Last = temp;
            delete temp -> next;
            Last -> next = First;
        }
    }
    iCount--;
}

template <class T>
void SinglyCL <T>:: DeleteAtPos(int iPos)
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
        struct NodeS <T> * temp = NULL;
        temp = First;

        for(int iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }

        struct NodeS <T> * tempx = NULL;

        tempx = temp -> next;
        temp -> next = tempx -> next;
        delete tempx;
    }
    iCount--; 
}
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//Class of Doubly Linear Linked List
////////////////////////////////////////////////////////////////
template <class T>
class DoublyLL
{
    public:
        struct NodeD<T> *First;
        int iCount;

        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T , int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
template <class T>
DoublyLL <T>:: DoublyLL()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void DoublyLL <T>:: Display()
{
    int iCnt = 0;
    struct NodeD <T> * temp = NULL;
    temp = First;

    cout<<"The elements of LL are : \n";

    for(iCnt = 1 ; iCnt <= iCount ; iCnt++)
    {
        cout<<temp -> data<<"\t";
        temp = temp -> next;
    }
    cout<<"\n";
}

template <class T>
int DoublyLL <T>:: Count()
{
    return iCount;
}

template <class T>
void DoublyLL <T>:: InsertFirst(T no)
{
    struct NodeD <T> * newn = new struct NodeD <T> (no);

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        (First) -> prev = newn;    
        newn -> next = First;
        First = newn;
    }
}

template <class T>
void DoublyLL <T>:: InsertLast(T no)
{
    struct NodeD <T> * newn = new struct NodeD <T> (no);     

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct NodeD <T> * temp = NULL;
        temp = First;

        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        newn -> prev = temp;    //#
        temp -> next = newn;
    }
}

template <class T>
void DoublyLL <T>:: InsertAtPos(T no , int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        printf("The position is invalid \n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(no);
    }

    else if(iPos == iCount + 1)
    {
        InsertLast(no);
    }

    else
    {
        struct NodeD <T>* newn = new struct NodeD <T> (no);
        struct NodeD <T>* temp = First;

        int iCnt = 0;
        for(iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;    //#
        temp -> next = newn;
        newn -> prev = temp;      //#
    }
}

template <class T>
void DoublyLL <T>:: DeleteFirst()
{
    if(iCount == 0)
    {
        return;
    }
    else if (iCount == 1)
    {
        
        First = NULL;
        delete First;
    }
    else
    {
        First = (First) -> next;
        delete First -> prev;    
        (First) -> prev = NULL;     
    }
}

template <class T>
void DoublyLL <T>:: DeleteLast()
{
    struct NodeD <T> * temp = NULL;
    temp = First;

    if(First == NULL)
    {
        return;
    }
    else if ((First) -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
    }
}

template <class T>
void DoublyLL <T>:: DeleteAtPos(int iPos)
{
    struct NodeD <T> * temp = NULL;
    temp = First;

    if((iPos < 1) || (iPos > iCount))
    {
        printf("The position is invalid \n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }

    else if(iPos == iCount)
    {
        DeleteLast();
    }

    else
    {
        int iCnt = 0;
        for(iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }
        temp -> next = temp -> next -> next;
        delete temp -> next -> prev;     //#
        temp -> next -> prev = temp;    //#
    }
}
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//Class of Doubly Circular Linked List
////////////////////////////////////////////////////////////////
template <class T>
class DoublyCL
{
    public:
        struct NodeD<T> *First;
        struct NodeD<T> *Last;
        int iCount;

        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T , int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
template <class T>
DoublyCL <T>:: DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void DoublyCL <T>:: Display()
{
    int iCnt = 0;
    struct NodeD <T> * temp = NULL;
    temp = First;

    cout<<"The elements of LL are : \n";

    for(iCnt = 1 ; iCnt <= iCount ; iCnt++)
    {
        cout<<temp -> data<<"\t";
        temp = temp -> next;
    }
    cout<<"\n";
}

template <class T>
int DoublyCL <T>:: Count()
{
    return iCount;
}

template <class T>
void DoublyCL <T>:: InsertFirst(T no)
{
    struct NodeD <T> * newn = new struct NodeD <T> (no);

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

template <class T>
void DoublyCL <T>:: InsertLast(T no)
{
    struct NodeD <T>* newn = new struct NodeD <T> (no);

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

template <class T>
void DoublyCL <T>:: InsertAtPos(T no , int iPos)
{
    if((iPos < 1) && (iPos > iCount + 1))
    {
        cout<<"Invalid Pos"<<"\n";
    }
    else if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        struct NodeD <T> * temp = NULL;
        temp = First;

        for(int iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
        {
            temp = temp -> next;
        }
        struct NodeD <T> *  newn = new struct NodeD <T> (no);

        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
        iCount++;
    }
}

template <class T>
void DoublyCL <T>:: DeleteFirst()
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

template <class T>
void DoublyCL <T>:: DeleteLast()
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

template <class T>
void DoublyCL <T>:: DeleteAtPos(int iPos)
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
        struct NodeD <T> * temp = NULL;
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
////////////////////////////////////////////////////////////////        

////////////////////////////////////////////////////////////////
//Class of Stack
////////////////////////////////////////////////////////////////
template <class T>
class Stack
{
    public:   
        struct NodeS <T> * First;
        int iCount;

        Stack();
        void Push(T); //InsertLast
        int Pop();      //DeleteLast
        void Display();
        int Count();
};
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
template <class T>
Stack <T>:: Stack()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void Stack <T>:: Push(T iNo) //InsertLast
{
    struct NodeS <T> * newn = new struct NodeS <T>(iNo);
    struct NodeS <T> * temp = NULL;
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

template <class T>
int Stack <T>::Pop()//DeleteLast
{
    struct NodeS <T> * temp = NULL;
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

        while(temp -> next -> next)
        {
            temp = temp -> next;
        }
        iValue = temp -> next -> data;
        delete temp -> next;
        temp -> next = NULL;
    }
    iCount--;
    return iValue;
}      

template <class T>
void Stack <T>::Display()
{
    if(First == NULL)
    {
        cout<<"Stack is empty \n";
        return;
    }

    cout<<"Elements of stack are : \n";

    struct NodeS <T> * temp = First;

    for(int iCnt = 1 ; iCnt <= iCount ; iCnt++)
    {
        cout<<temp -> data<<"\n";
        temp = temp -> next;
    }
}

template <class T>
int Stack <T>::Count()
{
    return iCount;
}
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//Class Of Queue
////////////////////////////////////////////////////////////////
template <class T>
class Queue
{  
    public:
        struct NodeS <T> * First;
        int iCount;
    
        Queue();
        void Enqueue(T); //InsertLast
        int Dequeue(); //DeleteFirst
        void Display();
        int Count();
};
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
template <class T>
Queue <T>:: Queue()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void Queue <T>::Enqueue(T iNo)//InsertLast
{
    struct NodeS <T> * newn = new struct NodeS <T>(iNo);
    struct NodeS <T> * temp = NULL;
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

template <class T>
int Queue <T>::Dequeue() //DeleteFirst
{
    struct NodeS <T> * temp = NULL;
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

template <class T>
void Queue <T>::Display()
{
    if(First == NULL)
    {
        cout<<"Queue is empty \n";
        return;
    }

    cout<<"Elements of Queue are : \n";

    struct NodeS <T> * temp = First;

    for(int iCnt = 1 ; iCnt <= iCount ; iCnt++)
    {
        cout<<temp -> data<<"\n";
        temp = temp -> next;
    }
}

template <class T>
int Queue <T>::Count()
{
    return iCount;
}
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//Main Function
////////////////////////////////////////////////////////////////
int main()
{
    SinglyLL <int> obj1();
    SinglyCL <int> obj2();
    DoublyLL <int> obj3();
    DoublyCL <int> obj4();
    Stack <int> obj5();
    Queue <int> obj6();

    return 0;
}
////////////////////////////////////////////////////////////////