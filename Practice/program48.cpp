#include<iostream>
using namespace std;

class Digit
{
    private:
        int iNo;

    public:

        Digit(int X)
        {
            iNo = X;
        }    

        int ReverseNum()
        {
            int iDigit = 0;
            int iReverse = 0;
            while(iNo > 0)
            {
                iDigit = iNo % 10;
                iReverse = (iReverse * 10) + iDigit;
                iNo = iNo / 10;
            }
            return iReverse;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    iRet = dobj.ReverseNum();

    cout<<"The reverse number is : "<<iRet;

    return 0;
}