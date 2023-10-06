#include<iostream>
using namespace std;

template <class T>
class Arrayx
{
    public:
        int iSize;
        T *Arr;
    
    Arrayx(int);
    ~Arrayx();
    void Accept();
    void Display();
    bool LinearSearch(T);
};

template <class T>
Arrayx <T>:: Arrayx(int x)
{
    iSize = x;
    Arr = new T[iSize];
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
    cout<<"Elements of array are :  \n";
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

template <class T>
bool Arrayx <T>:: LinearSearch(T Value)
{
    int iCnt = 0;
    bool flag = false;
    
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {

        if(Arr[iCnt] == Value)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    int iSize = 0;
    int No = 0;
    int iRet = 0;

    cout<<"Enter the size of the array : \n";
    cin>>iSize;

    Arrayx <int> *aobj = new Arrayx<int>(iSize);

    aobj->Accept();
    aobj -> Display();

    cout<<"Enter the value that u want to search : \n";
    cin>>No;

    iRet = aobj -> LinearSearch(No);

    if(iRet == true)
    {
        cout<<"Element is present \n";
    }
    else
    {
        cout<<"Element is not present \n";
    }
}