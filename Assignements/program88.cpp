#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(int iNo)
{
    UINT iMask = 0X00001C00;
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
        cout<<"The bits are on \n";
    }
    else
    {
        cout<<"The bits are off \n";
    }
    
    return 0;
}