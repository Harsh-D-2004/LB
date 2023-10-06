//Display binary of user entered number

#include<iostream>
using namespace std;

void DisplayBinary(int iNo)
{
    int iDigit = 0;

    cout<<"Binary conversion of "<<iNo<<"is "<<"\n";

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        cout<<iDigit<<"\t";
        iNo = iNo / 2;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    DisplayBinary(iValue);

    return 0;
}