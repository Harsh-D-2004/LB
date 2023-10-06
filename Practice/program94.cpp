#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;
    public:
        Number(int X)
        {
            iNo = X;
        }
        void Display()
        {
            int iCnt = 0;
            for(iCnt = 0 ; iCnt <= iNo ; iCnt++)
            {
                cout<<iCnt<<"\t";
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    Number nobj(iValue);
    nobj.Display();

    return 0;
}