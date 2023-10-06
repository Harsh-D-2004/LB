//Take input and tell if 7th , 14th , 21th bit is on or off

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00102040;
    UINT iResult = 0;

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
    bool bRet = false;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue1;

    bRet = CheckBit(iValue1);

    if(bRet == true)
    { 
        cout<<"7th, 14th and 21th bits are On"<<"\n";
    }
    else
    {
        cout<<"The bits are off"<<"\n";
    }

    return 0;
}