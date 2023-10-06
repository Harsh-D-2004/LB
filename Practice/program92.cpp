#include<iostream>
using namespace std;

class Array
{
    private:
        int iLenght;
        int *Arr;
    
    public:
        Array(int X)
        {
            iLenght = X;
            Arr = new int[iLenght];
        }
        void Input()
        {
            cout<<"Enter the elements : \n";

            for(int iCnt = 0 ; iCnt < iLenght ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Output()
        {
            cout<<"The elements are : "<<"\n";

            for(int iCnt = 0 ; iCnt < iLenght ; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }
        int Min()
        {
            int iCnt = 0;
            int iMin = 0;
            iMin = Arr[0];

            for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
            {
                if(Arr[iCnt] < iMin)
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the size of array : "<<"\n";
    cin>>iValue;

    Array aobj(iValue);
    aobj.Input();
    aobj.Output();
    iRet = aobj.Min();

    cout<<"The min element is : "<<iRet<<"\n";

    return 0;
}