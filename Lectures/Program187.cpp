//Maximum of two  numbers(OOP)

#include<iostream>
using namespace std;

class Number
{
    public: 

        int iNo1;
        int iNo2;

        Number(int X , int Y)
        {
            iNo1 = X;
            iNo2 = Y;
        }

        int Maximum()
        {
            if(iNo1 > iNo2)
            {
                return iNo1;
            }
            else
            {
                return iNo2;
            }
        }
};



int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter the first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter the second number : "<<"\n";
    cin>>iValue2;

    Number nobj1(iValue1 , iValue2);
    iRet = nobj1.Maximum();

    cout<<"The bigger number is : "<<iRet<<"\n";

    cout<<"Enter the first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter the second number : "<<"\n";
    cin>>iValue2;

    Number nobj2(iValue1 , iValue2);
    iRet = nobj2.Maximum();

    cout<<"The bigger number is : "<<iRet<<"\n";
    
    return 0;
}