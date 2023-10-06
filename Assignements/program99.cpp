#include<iostream>
using namespace std;

int Count1(int iNo)
{
    int iMask = 0X00000001;
    int iCnt = 0;
    int iCounter = 0;
    int iResult = 0;

    for(int iCnt = 1 ; iCnt <= 32 ; iCnt++)
    {
        iResult = iMask & iNo;

        if(iResult != 0)
        {
            iCounter++;
        }

        iMask = iMask << 1;
    }
    return iCounter;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = Count1(iValue);

    cout<<"The number of 1 is : "<<iRet<<"\n";

    return 0;
}