#include<iostream>
using namespace std;

bool Check(int iNo1)
{
    int iMask1 = 0X900;
    int iMask2 = 0X1;
    int iResult = 0;
    int iResult2 = 0;
    bool bFlag =  false;

    iResult = iNo1 & iMask1;

    for(int iCnt = 1 ; iCnt <= 32 ; iCnt++)
    {
        iResult2 = iResult & iMask2;

        if(iResult2 != 0)
        {
            bFlag = true;
            break;
        }

        iMask2 = iMask2 << 1;
    }
    return bFlag;
}


int main()
{
    int iValue1 = 0;
    bool bRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue1;

    bRet = Check(iValue1);

    if(bRet == true)
    {
        cout<<"Bit is on \n";
    }
    else
    {
        cout<<"Bit is off \n";
    }

    return 0;
}