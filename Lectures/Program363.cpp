//Linear Search

#include<iostream>
using namespace std;

template <class T>
class Arrayx
{
    public:

        T *Arr;
        int iSize;

        Arrayx(int);
        ~Arrayx();
        void Accept();
        void Display();
};

template <class T>
Arrayx <T>:: Arrayx(int iValue)
{
    this -> iSize = iValue;
    this -> Arr = new T[iSize];
}

template <class T>
Arrayx <T>:: ~Arrayx()
{
    delete []Arr;
}

template <class T>
void Arrayx <T>:: Accept()
{
    cout<<"Enter the elements : \n";
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template <class T>
void Arrayx <T>:: Display()
{
    cout<<"Elements of Array are : \n";
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the size of array : "<<"\n";
    cin>>iValue;

    Arrayx <int> *obj = new Arrayx <int> (iValue);

    obj -> Accept();
    obj -> Display();

    delete obj;

    return 0;
}

