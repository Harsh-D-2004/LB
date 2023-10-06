#include<iostream>
using namespace std;

class Arrayx
{
    public:

        int * Arr;
        int iSize;

        Arrayx(int );
        ~Arrayx();
        void Accept();
        void Display();
        void BubbleSort();
};

Arrayx :: Arrayx(int x)
{
    iSize = x;
    Arr = new int[iSize];
}

Arrayx :: ~Arrayx()
{
    delete []Arr;
}

void Arrayx :: Accept()
{
    int iCnt = 0;

    cout<<"Enter the elements for array : \n";

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void Arrayx :: Display()
{
    int iCnt = 0;

    cout<<"The elements of array are : \n";

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
}

void Arrayx :: BubbleSort()
{
    int i = 0 , j = 0;
    int Temp = 0;

    for(i = 0 ; i < iSize ; i++)
    {
        for(j = 0 ; j < (iSize - i - 1) ; j++)
        {
            if(Arr[j] < Arr[j+1])
            {
                Temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = Temp;
            }
        }
    }
}

int main()
{
    int iSize = 0;

    cout<<"Enter the size of array : \n";
    cin>>iSize;

    Arrayx aobj(iSize);

    aobj.Accept();
    aobj.Display();
    aobj.BubbleSort();

    cout<<"Data after sorting is : \n";

    aobj.Display();

    return 0;
}