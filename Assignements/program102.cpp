#include<iostream>
using namespace std;

bool Check(int iNo1 , int iPos1 , int iPos2)
{
    int iMask1 = 0X1;
    iMask1 = iMask1 << (iPos1 - 1);

    int iMask3 = 0X1;
    iMask3 = iMask3 << (iPos2 - 1);

    int iMask2 = 0X1;
    int iResult = 0;
    int iResult2 = 0;
    bool bFlag = false;

    iResult = iNo1 & (iMask1 | iMask3);

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
    int iValue2 = 0;
    int iValue3 = 0;
    bool bRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue1;

    cout<<"Enter the Pos1 : \n";
    cin>>iValue2;

    cout<<"Enter the Pos2 : \n";
    cin>>iValue3;

    bRet = Check(iValue1 , iValue2 , iValue3);

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