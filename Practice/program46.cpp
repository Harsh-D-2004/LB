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

        bool Check8()
        {
            int iDigit = 0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit == 8)
                {
                    break;
                }
                iNo = iNo / 10;
            }

            if(iNo == 0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    bRet = dobj.Check8();

    if(bRet == true)
    {
        cout<<"The number contains 8"<<"\n";
    }
    else
    {
        cout<<"The number does not contain 8"<<"\n";
    }

    return 0;
}