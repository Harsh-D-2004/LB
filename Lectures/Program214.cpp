//Toggle the 7th bit of the user entered number

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X40;
    UINT iResult = 0;

    return (iNo ^ iMask);
}

int main()
{
    UINT iValue1 = 0;
    UINT iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue1;

    iRet = ToggleBit(iValue1);

    cout<<"The result is : "<<iRet<<"\n";

    return 0;
}