//Display binary of user entered number

#include<iostream>
using namespace std;

void DisplayBinary(int iNo1 , int iNo2)
{
    int iResult = 0;

    iResult = iNo1 & iNo2;
    cout<<"Result of AND is : "<<iResult<<"\n";

    iResult = iNo1 | iNo2;
    cout<<"Result of OR is : "<<iResult<<"\n";

    iResult = iNo1 ^ iNo2;
    cout<<"Result of XOR is : "<<iResult<<"\n";
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter the first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter the second number : "<<"\n";
    cin>>iValue2;

    DisplayBinary(iValue1 , iValue2);

    return 0;
}