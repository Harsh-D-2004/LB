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

class CircularQueue
{   private:
        struct Queue * p;

    public:

        CircularQueue(int ilen)
        {
            p -> backindex = -1;
            p -> frontindex = -1;
            p -> iSize = ilen;
            p -> iCount = 0;
            p -> Arr = new int(p -> iSize);
        }

        bool isFull();
        bool isEmpty();
        void Enqueue(int);
        int Dequeue();
        void Display();
        void Count();
};

bool CircularQueue :: isFull()
{
    if(((p -> backindex + 1) % (p -> iSize) )== p -> frontindex)
    {
        return true;
    }

    return false;
}

bool CircularQueue :: isEmpty()
{
    if(p -> backindex == p -> frontindex)
    {
        return true;
    }

    return false;
}

void CircularQueue :: Enqueue(int iValue)
{   
    if(p -> frontindex == -1 && p -> backindex == -1)
    {
        p -> frontindex = 0;
        p -> backindex = 0;
    }
    if(isFull() == true)
    {
        cout<<"Queue Overflow \n";
        return;
    }
    else
    {
        p -> backindex = ((p -> backindex) + 1 % (p -> iSize));
        p -> Arr[p -> backindex] = iValue;
        p -> iCount++;
    }
}

int CircularQueue :: Dequeue()
{   
    int iRet = 0;

    if(p -> frontindex == -1 && p -> backindex == -1)
    {
        p -> frontindex = 0;
        p -> backindex = 0;
    }
    if(isEmpty() == true)
    {   
        iRet = p -> Arr[p -> backindex];
        p -> frontindex = -1;
        p -> backindex = -1;
        return iRet;
    }
    else
    {
        p -> frontindex = ((p -> frontindex) + 1 % (p -> iSize));
        iRet = p -> Arr[p -> frontindex];
        p -> Arr[p -> frontindex] = -1;
        p -> iCount--;
    }

    return iRet;
}

void CircularQueue :: Display()
{   
    int i = p -> frontindex;

    while(i <= p -> backindex)
    {
        cout<<p -> Arr[i]<<"\t";
        i = (i + 1)%(p -> iSize);
    }
}

void CircularQueue :: Count()
{
    cout << "The number of elements are : " <<p -> iCount<<"\n";
}


int main()
{   
    int ilen = 0;

    cout<<"Enter the size of array : \n";
    cin>>ilen;

    CircularQueue cobj(ilen);

    cobj.Enqueue(11);
    cobj.Enqueue(21);
    cobj.Enqueue(51);
    cobj.Enqueue(101);

    cobj.Display();
    cobj.Count();

    cobj.Dequeue();
    cobj.Dequeue();
    cobj.Dequeue();

    cobj.Display();
    cobj.Count();

    cobj.Enqueue(121);

    cobj.Display();

    return 0;
}