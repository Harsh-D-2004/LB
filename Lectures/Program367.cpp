//Binary Search

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
        bool LinearSearch(T);
        bool BidirectionalSearch(T);
        bool BinarySearch(T);
        bool CheckSorted();
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

template <class T>
bool Arrayx <T>:: LinearSearch(T No)
{
    bool Flag = false;

    for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            Flag = true;
            break;
        }
    }
    return Flag;
}

template <class T>
bool Arrayx <T>:: BidirectionalSearch(T No)
{
    bool Flag = false;
    int iStart = 0;
    int iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        if((Arr[iStart] == No) || (Arr[iEnd] == No))
        {
            Flag = true;
            break;
        }
        iStart++;
        iEnd--;
    }
    return Flag;
}

template <class T>
bool Arrayx <T> :: BinarySearch(T No)
{
    int iStart = 0 , iEnd = 0 , iMid = 0;
    bool Flag = false;

    iStart = 0;
    iEnd = iSize -1;

    while(iStart <= iEnd)
    {
        iMid = iStart + (iEnd - iStart)/2;

        if((Arr[iStart] == No) || (Arr[iMid] == No) || (Arr[iEnd] == No))
        {
            Flag = true;
            break;
        }
        else if(Arr[iMid] < No)
        {
            iStart = iMid + 1;
        }
        else if(Arr[iMid] > No)
        {
            iEnd = iMid - 1;
        }
    }
    return Flag;
}

template <class T>
bool Arrayx <T> :: CheckSorted()
{
    int i = 0;
    bool flag = true;

    for(i = 0 ; i < iSize - 1 ; i++)
    {
        if(Arr[i + 1] >= Arr[i])
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
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the size of array : "<<"\n";
    cin>>iValue;

    Arrayx <int> *obj = new Arrayx <int> (iValue);

    obj -> Accept();
    obj -> Display();

    cout<<"Enter the element that u want to search \n";
    cin>>iValue;

    bRet = obj -> CheckSorted();

    if(bRet == true)
    {
        cout<<"Array is sorted \n";
    }
    else
    {
        cout<<"Array is not sorted \n";
    }

    delete obj;

    return 0;
}

