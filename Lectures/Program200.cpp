//Display Hex of user entered number

#include<iostream>
using namespace std;

void DisplayHex(int iNo)
{
    int iDigit = 0;

    cout<<"Hexadecimal conversion of "<<iNo<<"is "<<"\n";

    while(iNo != 0)
    {
        iDigit = iNo % 16;
        if(iDigit <= 9)
        {
            cout<<iDigit;
        }
        else
        {
            switch(iDigit)
            {
                case 10:
                    cout<<"A";
                    break;
                case 11:
                    cout<<"B";
                    break;
                case 12:
                    cout<<"C";
                    break;
                case 13:
                    cout<<"D";
                    break;
                case 14:
                    cout<<"E";
                    break;
                case 15:
                    cout<<"F";
                    break;
            }
                
        }
        iNo = iNo / 16;
    }
    cout<<"\n";
}

int main()
{
    int iValue1 = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue1;

    DisplayHex(iValue1);

    return 0;
}