//Maximum of two  numbers(OOP)

#include<iostream>
using namespace std;

class Number
{
    public: 

        int iNo1;
        int iNo2;

        void Accept()
        {
            cout<<"Enter the first number : "<<"\n";
            cin>>iNo1;

            cout<<"Enter the first number : "<<"\n";
            cin>>iNo2;
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
    int iRet = 0;
    Number nobj;

    nobj.Accept();

    iRet = nobj.Maximum();

    cout<<"The bigger number is : "<<iRet;
    
    return 0;
}