#include<iostream>
using namespace std;

bool CheckBit(int iNo , int iPos)
{
    int iMask = 0X00000001;
    int iResult = 0;
    iMask = iMask << (iPos - 1);

    iResult = iMask & iNo;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue1;

    cout<<"Enter the position : \n";
    cin>>iValue2;

    bRet = CheckBit(iValue1 , iValue2);

    if(bRet == true)
    {
        cout<<"The bit is on \n";
    }
    else
    {
        cout<<"The bit is not on \n";
    }

    return 0;
}