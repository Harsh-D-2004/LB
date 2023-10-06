#include<iostream>
using namespace std;

class Digit
{
    private :
        int  iNo;

    public :
        Digit(int X)
        {
            iNo = X;
        }

        bool CheckArmstrong()
        {
            int iSum = 0;
            int iDigit = 0;
            int iTemp = iNo;

            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                iSum = iSum + (iDigit * iDigit * iDigit);
                iTemp = iTemp / 10;
            }

            if(iSum == iNo)
            {
                return true;
            }
            else
            {
                return false;
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
    bRet = dobj.CheckArmstrong();

    if(bRet == true)
    {
        cout<<"The number is armstrong"<<"\n";
    }
    else
    {
        cout<<"The number is not armstrong"<<"\n";
    }


    return 0;
}