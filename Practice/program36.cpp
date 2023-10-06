#include<iostream>
using namespace std;

class Digit
{
    private:
        int iNo;

    public:
        Digit(int X)
        {
            iNo = X;
        }

        void DisplayDigit()
        {
            int iDigit = 0;
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                printf("%d\t" , iDigit);
                iNo = iNo / 10;
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    dobj.DisplayDigit();

    return 0;
}