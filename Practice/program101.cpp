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
    bool BidirectionalSearch(T);
    bool BinarySearch(T);
    bool CheckSorted();
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

template <class T>
bool Arrayx <T>:: BidirectionalSearch(T Value)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    bool flag = false;
    
    while(iStart <= iEnd)
    {

        if((Arr[iStart] == Value) || (Arr[iEnd] == Value))
        {
            flag = true;
            break;
        }
        iStart ++;
        iEnd --;
    }
    return flag;
}

template <class T>
bool Arrayx <T>:: BinarySearch(T Value)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    int iMid = 0;
    bool flag = false;
    
    while(iStart <= iEnd)
    {
        iMid = iStart + (iEnd - iStart)/2;

        if((Arr[iMid] == Value) ||(Arr[iStart] == Value) || (Arr[iEnd] == Value))
        {
            flag = true;
            break;
        }
        else if(Arr[iMid] < Value)
        {
            iStart = iMid + 1;
        }
        else if(Arr[iMid] > Value)
        {
            iEnd = iMid - 1;
        }
    }
    return flag;
}

template <class T>
bool Arrayx <T>:: CheckSorted()
{
    bool flag = true;
    int iCnt = 0;
    
    for(iCnt = 0 ; iCnt < (iSize - 1) ; iCnt++)
    {
        if(Arr[iCnt + 1] > Arr[iCnt])
        {
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int iSize = 0;
    int No = 0;
    bool bRet1 = false;
    bool bRet2 = false;

    cout<<"Enter the size of the array : \n";
    cin>>iSize;

    Arrayx <int> *aobj = new Arrayx<int>(iSize);

    aobj->Accept();
    aobj -> Display();

    bRet1 = aobj -> CheckSorted();

    if(bRet1 == true)
    {
        cout<<"Array is sorted \n";
    }
    else
    {
        cout<<"Array is not sorted \n";
        return -1;
    }

    cout<<"Enter the value that u want to search : \n";
    cin>>No;

    bRet2 = aobj -> BinarySearch(No);

    if(bRet2 == true)
    {
        cout<<"Element is present \n";
    }
    else
    {
        cout<<"Element is not present \n";
    }
}