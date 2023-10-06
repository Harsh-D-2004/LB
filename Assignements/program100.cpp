#include<iostream>
using namespace std;

void Pos1(int iNo1 , int iNo2)
{
    int iResult1 = 0;
    int iResult2 = 0;
    int iMask = 0X1;
    int iCounter = 0;
    int iPos = 0;

    iResult1 = iNo1 & iNo2;

    for(int iCnt = 1 ; iCnt <= 32 ; iCnt++)
    {
        iResult2 = iResult1 & iMask;
        iCounter++;

        if(iResult2 != 0)
        {
            iPos = iCounter;
            cout<<"Pos is : "<<iPos<<"\t";
        }

        iMask = iMask << 1;
    }
}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue1;

    cout<<"Enter the number : \n";
    cin>>iValue2;

    Pos1(iValue1 , iValue2);

    return 0;
}