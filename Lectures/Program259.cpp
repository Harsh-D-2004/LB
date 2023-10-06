#include<iostream>
using namespace std;

typedef class Node
{
    public:

        int data;
        struct Node *next;
        struct Node *prev;

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

        virtual void InsertFirst(int No) = 0; 
        virtual void InsertLast(int No) = 0;
        virtual void InsertAtPos(int No , int iPos) = 0;

        virtual void DeleteFirst() = 0; 
        virtual void DeleteLast() = 0;
        virtual void DeleteAtPos(int iPos) = 0;

        virtual void Display() = 0;

        virtual int Count() = 0; 
};

class DoublyCircularLL : public LinkedList
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        DoublyCircularLL();

        ~DoublyCircularLL();

        void InsertFirst(int No); 
        void InsertLast(int No);
        void InsertAtPos(int No , int iPos);

        void DeleteFirst(); 
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();

        int Count();
};

void DoublyCircularLL :: InsertFirst(int No)
{
    
}

void DoublyCircularLL :: InsertLast(int No)
{

}

void DoublyCircularLL :: InsertAtPos(int No , int iPos)
{

}

void DoublyCircularLL :: DeleteFirst()
{

}

void DoublyCircularLL :: DeleteLast()
{

}

void DoublyCircularLL :: DeleteAtPos(int iPos)
{

}

void DoublyCircularLL :: Display()
{

}

int DoublyCircularLL :: Count()
{
    return iCount;
}

DoublyCircularLL :: DoublyCircularLL()
{

}

DoublyCircularLL :: ~DoublyCircularLL()
{

}

int main()
{


    return 0;
}