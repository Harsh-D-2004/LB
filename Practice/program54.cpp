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
            int iCnt = 0;

            printf("Enter the elements : \n");

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            printf("Elements are : \n");

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        void EvenFreq()
        {
            int iCnt = 0;
            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    printf("%d\n" , Arr[iCnt]);
                }
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the size of array : "<<"\n";
    cin>>iValue;

    Array aobj(iValue);
    aobj.Accept();
    aobj.Display();

    printf("The even elements are : \n");

    aobj.EvenFreq();

    return 0;
}