#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(int iNo)
{
    UINT iMask = 0X4000;
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
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"The bit is on \n";
    }
    else
    {
        cout<<"The bit is off \n";
    }
    
    return 0;
}