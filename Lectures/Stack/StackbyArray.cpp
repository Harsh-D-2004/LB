#include<iostream>
using namespace std;

struct Stackx
{
    int iSize;
    int iTop;
    int * arr;
};

bool isEmpty(struct Stackx * ptr)
{
    if(ptr -> iTop == -1)
    {
        return true;
    }
    return false;
}

bool isFull(struct Stackx * ptr)
{
    if(ptr -> iTop == ptr -> iSize - 1)
    {
        return true;
    }
    return false;
}

void Push(struct Stackx * ptr , int iValue)
{
    if(isFull(ptr) == true)
    {
        cout<<"Stack Overflow \n";
        return;
    }
    else
    {
        ptr -> arr[ptr -> iTop + 1] = iValue;
        ptr -> iTop++;
    }
}

void Pop(struct Stackx * ptr)
{   
    int Ret = 0;

    if(isEmpty(ptr) == true)
    {
        cout<<"Stack is Empty \n";
        return;
    }
    else
    {   
        Ret = ptr -> arr[ptr -> iTop];
        ptr -> arr[ptr -> iTop] = 0;
        ptr -> iTop--;
    }

    cout<<"The Popped element is : "<<Ret<<"\n";
}

void Display(struct Stackx * ptr)
{
    int i = 0;

    for(i = 0 ; i <= ptr -> iTop ; i++)
    {
        cout<<ptr -> arr[i]<<"\t";
    }
    cout<<"\n";
}

int Count(struct Stackx * ptr)
{
    return (ptr -> iTop + 1);
}

int main()
{   
    struct Stackx * sptr;
    int iRet = 0;

    sptr -> iSize = 5;
    sptr -> iTop = -1;
    sptr -> arr = new int(5);

   Push(sptr , 11);
   Push(sptr , 21);
   Push(sptr , 31);
   Push(sptr , 41);

   Display(sptr);

   Pop(sptr);

   Display(sptr);

   iRet = Count(sptr);
   cout<<"Count is : "<<iRet<<"\n";

    return 0;
}