#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT CheckBit(int iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = CheckBit(iValue);

    cout<<"The result is : "<<iRet<<"\n";
    
    return 0;
}