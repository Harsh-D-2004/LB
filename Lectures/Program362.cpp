#include<iostream>
using namespace std;

class Arrayx
{
    public:

        int *Arr;
        int iSize;

        Arrayx(int);
        ~Arrayx();
        void Accept();
        void Display();
};

Arrayx :: Arrayx(int iValue)
{
    this -> iSize = iValue;
    this -> Arr = new int[iSize];
}

Arrayx :: ~Arrayx()
{
    delete []Arr;
}

void Arrayx :: Accept()
{
    cout<<"Enter the elements : \n";
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void Arrayx :: Display()
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

    Arrayx *obj = new Arrayx(iValue);

    obj -> Accept();
    obj -> Display();

    delete obj;

    return 0;
}

