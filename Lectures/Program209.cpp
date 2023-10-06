//Take input from user and take nth bit from user and tell wether it is on or off 

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo , UINT iPos)
{
    if((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalicd d position"<<"\n";
        return -1;
    }

    UINT iMask = 0X00000001;
    UINT iResult = 0;
    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

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
    UINT iValue1 = 0;
    int iBit = 0;
    bool bRet = false;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter the Bit : "<<"\n";
    cin>>iBit;

    bRet = CheckBit(iValue1 , iBit);

    if(bRet == true)
    { 
        cout<<"Bit is On"<<"\n";
    }
    else
    {
        cout<<"Bit is off"<<"\n";
    }

    return 0;
}