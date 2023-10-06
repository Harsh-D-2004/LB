#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo1;
        int iNo2;

    public:

        Number(int X , int Y)
        {
            iNo1 = X;
            iNo2 = Y;
        }

        int Exponent()
        {
            int iCnt = 0;
            int iAns = 1;
            for(iCnt = 1 ; iCnt <= iNo2 ; iCnt++)
            {
                iAns = iAns * iNo1;
            }
            return iAns;
        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter the base : "<<"\n";
    cin>>iValue1;

    cout<<"Enter the power : "<<"\n";
    cin>>iValue2;

    Number nobj(iValue1 , iValue2);

    iRet = nobj.Exponent();

    cout<<"The Answer is : "<<iRet<<"\n";

    return 0;
}