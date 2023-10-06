//Accept one number and off the 7th bit of the given position

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT Offbit(UINT iNo)
{
    UINT iMask = 0XFFFFFFBF;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue1 = 0;
    UINT iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue1;

    iRet = Offbit(iValue1);

    cout<<"The result is : "<<iRet<<"\n";

    return 0;
}