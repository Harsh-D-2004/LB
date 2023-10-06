//Accept n number from user

#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Enter the elements : "<<"\n";

            int iCnt = 0;
            for(iCnt = 1 ; iCnt <= iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            cout<<"Elements of the Array are : "<<"\n";

            int iCnt = 0;
            for(iCnt = 1 ; iCnt <= iSize ; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number of elements : "<<"\n";
    cin>>iValue;

    Array aobj(iValue);
    aobj.Accept();
    aobj.Display();
    
    return 0;
}