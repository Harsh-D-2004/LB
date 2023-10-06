//Toggle the position entered by user and number entered by user

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo , UINT iPos)
{
    UINT iMask = 0X1;
    iMask = iMask << (iPos - 1);
    UINT iResult = 0;

    return (iNo ^ iMask);
}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;
    UINT iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter the position : "<<"\n";
    cin>>iValue2;

    iRet = ToggleBit(iValue1 , iValue2);

    cout<<"The result is : "<<iRet<<"\n";

    return 0;
}