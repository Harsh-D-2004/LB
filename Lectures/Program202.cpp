//Take number from user and check wether 3rd bit is on or off

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 4;
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
        cout<<"Third bit is On"<<"\n";
    }
    else
    {
        cout<<"Third bit is off"<<"\n";
    }

    return 0;
}