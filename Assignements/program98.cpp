#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT CheckBit(int iNo)
{
    UINT iMask = 0XF000000F;
    UINT iResult = 0;

    iResult = iMask ^ iNo;

    return iResult;
}

int main()
{
    UINT iValue1 = 0;
    UINT iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue1;

    iRet = CheckBit(iValue1);

    cout<<"The modified number is : "<<iRet;

    return 0;
}