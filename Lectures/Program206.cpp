//Take input and tell if 7th and 4th bit is on or off

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00000108;
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
        cout<<"4th and 9th bits are On"<<"\n";
    }
    else
    {
        cout<<"The bits are off"<<"\n";
    }

    return 0;
}