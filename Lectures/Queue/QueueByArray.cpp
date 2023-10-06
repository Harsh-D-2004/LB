#include<iostream>
using namespace std;

struct Queue
{
    int backindex;
    int frontindex;
    int iSize;
    int iCount;
    int * Arr;
};

bool isFull(struct Queue * p)
{
    if(p -> backindex == p -> iSize - 1)
    {
        return true;
    }

    return false;
}

bool isEmpty(struct Queue * p)
{
    if(p -> backindex == p -> frontindex)
    {
        return true;
    }

    return false;
}

void Enqueue(struct Queue * p , int iValue)
{
    if(isFull(p) == true)
    {
        cout<<"Queue Overflow \n";
        return;
    }
    else
    {
        p -> backindex++;
        p -> Arr[p -> backindex] = iValue;
        p -> iCount++;
    }
}

int Dequeue(struct Queue * p)
{   
    int iRet = 0;

    if(isEmpty(p) == true)
    {
        cout<<"Queue is Empty \n";
        return -1;
    }
    else
    {
        p -> frontindex++;
        iRet = p -> Arr[p -> frontindex];
        p -> Arr[p -> frontindex] = -1;
        p -> iCount--;
    }

    return iRet;
}

void Display(struct Queue * p)
{
    for(int i = p -> frontindex + 1 ; i <= p -> backindex ; i++)
    {
        cout<<p -> Arr[i]<<"\t";
    }
}

void Count(struct Queue * p)
{
    cout << "The number of elements are : " <<p -> iCount<<"\n";
}


int main()
{
    struct Queue * p;
    p -> iCount = 0;
    p -> frontindex = -1;
    p -> backindex = -1;
    p -> iSize = 5;
    p -> Arr[p -> iSize];

    Enqueue(p , 11);
    Enqueue(p , 21);
    Enqueue(p , 51);
    Enqueue(p , 101);

    Display(p);
    Count(p);

    Dequeue(p);

    Display(p);
    Count(p);

    return 0;
}