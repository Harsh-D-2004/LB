#include<iostream>
using namespace std;

class Array
{
    private:
        int iSize;
        int *Arr;

    public:

        Array(int X)
        {
            iSize = X;
            Arr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Enter the elements : "<<"\n";

            int iCnt = 0;
            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"The elements are : "<<"\n";

            int iCnt = 0;
            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        int CountOdd()
        {
            int iCnt = 0;
            int iCount = 0;
            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                if(Arr[iCnt] % 2 != 0)
                {
                    iCount++;
                }
            }
            return iCount;
        }
            
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the size of array : "<<"\n";
    cin>>iValue;

    Array aobj(iValue);

    aobj.Accept();
    aobj.Display();
    iRet = aobj.CountOdd();

    cout<<"The count of odd numbers are : "<<iRet;

    return 0;
}