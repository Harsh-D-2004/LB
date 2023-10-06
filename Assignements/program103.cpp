#include<iostream>
using namespace std;

int Check(int iNo1 , int iPos1 , int iPos2)
{
    int iMask1 = 0X1;
    iMask1 = iMask1 << (iPos1 - 1);

    int iMask3 = 0X1;
    iMask3 = iMask3 << (iPos2 - 1);

    int iMask2 = 0X1;
    iMask2 = iMask2 << (iPos1 - 1);

    int iResult = 0;
    int iResult2 = 0;
    bool bFlag = false;

    iResult = iNo1 & (iMask1 | iMask3);

    for(int iCnt = iPos1 ; iCnt <= iPos2 ; iCnt++)
    {
        iResult2 = iResult | iMask2;

        iMask2 = iMask2 << 1;
    }
    return iResult2;
}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue1;

    cout<<"Enter staring : \n";
    cin>>iValue2;

    cout<<"Enter ending : \n";
    cin>>iValue3;

    iRet = Check(iValue1 , iValue2 , iValue3);

    cout<<"The modified number is : "<<iRet;

    return 0;
}