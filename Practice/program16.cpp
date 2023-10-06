#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;

    public:

        Number(int X)
        {
            iNo = X;
        }

        int SumFactors()
        {
            int iCnt = 0;
            int iSum = 0;
            for(iCnt = 2 ; iCnt <= (iNo/2) ; iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    iSum = iSum + iCnt;
                }
            }
            return iSum;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Number nobj(iValue);

    iRet = nobj.SumFactors();

    cout<<"The sum of factors is : "<<iRet<<"\n";

    return 0;
}