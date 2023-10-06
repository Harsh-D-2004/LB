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

        int DisplayAverage()
        {
            int iDigit = 0;
            int iSum = 0;
            int iCnt = 0;
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo / 10;
                iCnt++;
            }
            return (((float)iSum)/((float)iCnt));
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    iRet = dobj.DisplayAverage();

    cout<<"The average is : "<<iRet;

    return 0;
}