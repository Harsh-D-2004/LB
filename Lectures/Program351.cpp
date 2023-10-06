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
        T iMax();     
        ~Arrayx();
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

template <class T>
T Arrayx <T> :: iMax()
{
    int iCnt = 0;
    T iMax = Arr[0];
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

template <class T>
Arrayx<T> :: ~Arrayx()
{
    delete []Arr;
}

int main()
{
    Arrayx<int> obj(5);
    int iRet = 0;

    obj.Accept();
    obj.Display();

    iRet = obj.iMax();
    cout<<"Max number is "<<iRet<<"\n";


    Arrayx<double> obj2(5);
    double dRet = 0.0;

    obj2.Accept();
    obj2.Display();
    dRet = obj2.iMax();
    cout<<"Max number is "<<dRet<<"\n";

    return 0;
}