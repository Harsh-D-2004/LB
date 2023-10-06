#include<iostream>
using namespace std;

class Node
{
    public:
        Node * next;
        int num_elements;
        int * Arr;

    Node(int n)
    {
        next = NULL;
        num_elements = 0;
        Arr = new int[n];
    }
};

class UnrollLL
{
    public:
        Node * start;
        Node * end;

        int sizenode;
        int num_node;

    UnrollLL(int capacity)
    {
        start = NULL;
        end = NULL;
        sizenode = capacity + 1;
        num_node = 0;
    }

    void Insert(Node * head , int value);
    void display(Node * head);
    void Search(Node * head);
    void delete_element(Node * head , int value);
};

void UnrollLL :: Insert(Node * head , int value)
{
    num_node++;

    if(start == NULL)
    {
        start = new Node(sizenode);
        start -> Arr[0] = value;
        start -> num_elements++;
        end = start;
        return;
    }

    if(end)
}

int main()
{
    return 0;
}