//Accept one number and off the 7th bit

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT Offbit(UINT iNo)
{
    UINT iMask = 0X00000040;
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
    UINT iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue1;

    iRet = Offbit(iValue1);

    cout<<"The result is : "<<iRet<<"\n";

    return 0;
}