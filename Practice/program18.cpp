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

        int CountEven()
        {
            int iDigit = 0;
            int iCount = 0;

            while(iNo != 0)
            {
              iDigit = iNo % 10;
              if(iDigit % 2 == 0)
              {
                iCount++;
              }  
              iNo = iNo / 10;
            }
            return iCount;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    iRet = dobj.CountEven();

    cout<<"The count of even numbers are : "<<iRet;

    return 0;
}