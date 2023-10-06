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

}

void SinglyLL :: InsertLast(int No)
{

}

void SinglyLL :: InsertAtPos(int No , int iPos)
{
    
}

void SinglyLL :: DeleteFirst()
{

}

void SinglyLL :: DeleteLast()
{

}

void SinglyLL :: DeleteAtPos(int iPos)
{
    
}

void SinglyLL :: Display()
{

}

void SinglyLL :: Count()
{

}

SinglyLL ::SinglyLL()
{

}

int main()
{

    return 0;
}