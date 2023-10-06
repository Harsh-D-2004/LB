//Accept n number from user and display summation

#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int iNo)
        {
            cout<<"Inside constructor"<<"\n";
            iSize = iNo;
            Arr = new int[iSize];
        }

        ~Array()
        {
            cout<<"Inside destructor"<<"\n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Inside Accept function"<<"\n";
            cout<<"Enter the elements : "<<"\n";

            int iCnt = 0;
            for(iCnt = 1 ; iCnt < iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Inside Display function"<<"\n";
            cout<<"Elements of the Array are : "<<"\n";

            int iCnt = 0;
            for(iCnt = 1 ; iCnt < iSize ; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        int Summation()
        {
            cout<<"Inside Summation function"<<"\n";
            int iSum = 0;
            int iCnt = 0;
            for(iCnt= 0  ; iCnt < iSize ; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
};

int main()
{
    cout<<"Inside main"<<"\n";

    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number of elements : "<<"\n";
    cin>>iValue;

    Array aobj(iValue);
    aobj.Accept();
    aobj.Display();
    iRet = aobj.Summation();

    cout<<"The sum of elements of array are : "<<iRet<<"\n";
    
    return 0;
}