//Bubble Sort(Descending)

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
        void BubbleSort();
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
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

template <class T>
void Arrayx <T>:: BubbleSort()
{
    T temp;
    int i = 0 , j = 0;

    for(i = 0 ; i < iSize ; i++)
    {
        for(j = 0 ; j < iSize - 1 ; j++)
        {
            if(Arr[j] < Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
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
    obj -> BubbleSort();

    cout<<"Data after sorting is : \n";
    obj -> Display();

    delete obj;

    return 0;
}

