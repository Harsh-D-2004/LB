#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo1;
        int iNo2;

    public:
        Number(int X , int Y)
        {
            iNo1 = X;
            iNo2 = Y;
        }

        unsigned long int Addition()
        {
            unsigned long int iAns = 0;
            iAns = iNo1 + iNo2;
            return iAns;
        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    unsigned long int iRet = 0;

    cout<<"Enter the number1 : "<<"\n";
    cin>>iValue1;

    cout<<"Enter the number2 : "<<"\n";
    cin>>iValue2;

    Number nobj(iValue1 , iValue2);
    iRet = nobj.Addition();

    cout<<"Addition is : "<<iRet;

    return 0;
}