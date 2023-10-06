//Accept number and display sum of digits

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

        int SumDigits()
        {
            int iDigit = 0;
            int iSum = 0;
            int iTemp = 0;

            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                iSum = iSum + iDigit;
                iTemp = iTemp / 10;
            }

            return iSum;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    iRet = dobj.SumDigits();

    cout<<"The sum is : "<<iRet;

    return 0;
}