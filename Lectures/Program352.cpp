#include<iostream>
using namespace std;

//Strcuture of Singly Linked List
template <class T>
struct NodeS
{
    T data;
    struct NodeS *next;
};

//Strcuture of Doubly Linked List
template <class T>
struct NodeD
{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};

//Class of Singly Linear Linked List
template <class T>
class SinglyLL
{
    public:
        struct NodeS<T> *head;
        int iCount;
};

//Class of Singly Circular Linked List
template <class T>
class SinglyCL
{
    public:
        struct NodeS<T> *head;
        struct NodeS<T> *tail;
        int iCount;
};

//Class of Doubly Linear Linked List
template <class T>
class DoublyLL
{
    public:
        struct NodeD<T> *head;
        int iCount;
};

//Class of Doubly Circular Linked List
template <class T>
class DoublyCL
{
    public:
        struct NodeD<T> *head;
        struct NodeD<T> *tail;
        int iCount;
};

int main()
{

    return 0;
}