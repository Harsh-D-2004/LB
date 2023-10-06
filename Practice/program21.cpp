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

        void Order()
        {
            int iCnt = 0;
            for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
            {
                cout<<iCnt<<"\t";
            }
            for(iCnt = (iNo - 1) ; iCnt >= 1 ; iCnt--)
            {
                cout<<iCnt<<"\t";
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Number nobj(iValue);
    nobj.Order();

    return 0;
}