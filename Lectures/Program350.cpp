#include<iostream>
using namespace std;

template <class T>
class Arrayx
{
    public:
        T *Arr;
        int iSize;

        Arrayx(int lenght);
        void Accept();
        void Display();      
};

template <class T>
Arrayx <T>:: Arrayx(int length)
{
    iSize = length;
    Arr = new T[iSize];
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
    cout<<"Elements of array are : \n";
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    Arrayx<int> obj(5);

    obj.Accept();
    obj.Display();


    Arrayx<double> obj2(5);

    obj2.Accept();
    obj2.Display();

    return 0;
}