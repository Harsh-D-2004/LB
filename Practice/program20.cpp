#include<iostream>
using namespace std;

class Array
{
    private:
        int iSize;
        int iNum;
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

        void GetSearch()
        {

            cout<<"Enter the Number u want to search : "<<"\n";
            cin>>iNum;
        }

        bool CheckNum()
        {
            int iCnt = 0;
            bool bFlag = false;
            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                if(Arr[iCnt] == iNum)
                {
                    bFlag = true;
                    break;
                }
            }
            return bFlag;
        }
            
};

int main()
{
    int iValue = 0;
    int iValue2 = 0;
    bool bRet = false;

    cout<<"Enter the size of array : "<<"\n";
    cin>>iValue;


    Array aobj(iValue);

    aobj.Accept();
    aobj.GetSearch();
    aobj.Display();


    bRet = aobj.CheckNum();

    if(bRet == true)
    {
        cout<<"The number is present"<<"\n";
    }
    else
    {
        cout<<"The number is not present"<<"\n";
    }

    return 0;
}