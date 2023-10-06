#include<iostream>
using namespace std;

class Number
{
    private:
        int iBase;
        int iPower;
    
    public:
        Number(int x , int y)
        {
            iBase = x;
            iPower = y;
        }
        int CalculatePower()
        {
            int iCnt = 0;
            int iAns = 1;

            for(iCnt = 1 ; iCnt <= iPower ; iCnt++)
            {
                iAns = iAns * iBase;
            }
            return iAns;
        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter the base"<<"\n";
    cin>>iValue1;

    cout<<"Enter the power"<<"\n";
    cin>>iValue2;

    Number nobj(iValue1 , iValue2);

    iRet = nobj.CalculatePower();

    cout<<"The answer is : "<<iRet<<"\n";

    return 0;
}