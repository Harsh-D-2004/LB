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
    bool Flag = 0;

    iStart = 0;
    iEnd = iSize -1;

    while(iStart <= iEnd)
    {
        iMid = iStart + (iEnd - iStart)/2;

        if(Arr[iMid] == No)
        {
            Flag = true;
            break;
        }
        else if(Arr[iMid] < No)
        {
            iEnd = iMid + 1;
        }
        else if(Arr[iMid] > No)
        {
            iEnd = iMid - 1;
        }
    }
    return Flag;
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

    bRet = obj -> BinarySearch(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is present in the array\n";
    }
    else
    {
        cout<<iValue<<" is not present in the array\n";
    }

    delete obj;

    return 0;
}

