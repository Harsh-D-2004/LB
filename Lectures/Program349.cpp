#include<iostream>
using namespace std;

class Arrayx
{
    public:
        int *Arr;
        int iSize;

        Arrayx(int lenght);
        void Accept();
        void Display();      
};

Arrayx :: Arrayx(int length)
{
    iSize = length;
    Arr = new int[iSize];
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
    cout<<"Elements of array are : \n";
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    Arrayx aobj(5);

    aobj.Accept();
    aobj.Display();

    return 0;
}