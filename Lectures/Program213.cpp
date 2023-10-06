//Accept one number and position from user and off the bit of the given position

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT Offbit(UINT iNo , UINT iPos)
{
    UINT iMask = 0X1;
    iMask = iMask << (iPos - 1);
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return (iNo ^ iMask);
    }
    else
    {
        return (iNo);
    }

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

    iRet = Offbit(iValue1 , iValue2);

    cout<<"The result is : "<<iRet<<"\n";

    return 0;
}