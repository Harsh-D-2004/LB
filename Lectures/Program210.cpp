//Accept one number and two positions and check wether botht he bits are on or off

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool Togglebit(UINT iNo , UINT iPos1 , UINT iPos2)
{
    UINT iMask1 = 0X1;
    UINT iMask2 = 0X1;
    UINT iMask = 0X0;
    UINT iResult = 0;

    if((iPos1 > 32) || (iPos1 < 1) || (iPos2 > 32) || (iPos2 < 1))
    {
        cout<<"Invalid Position"<<"\n";
        return -1;
    }

    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);
    iMask = iMask1 | iMask2;

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
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    bool bRet = false;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter the position 1 : "<<"\n";
    cin>>iValue2;

    cout<<"Enter the position 2 : "<<"\n";
    cin>>iValue3;

    bRet = Togglebit(iValue1 , iValue2 , iValue3);

    if(bRet == true)
    {
        cout<<"Bits are on"<<"\n";
    }
    else
    {
        cout<<"Bits are  off"<<"\n";
    }

    return 0;
}