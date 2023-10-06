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

        int CheckPrime()
        {
            int iCnt = 0;
            bool bFlag = true;
            for(iCnt = 2 ; iCnt <= (iNo/2) ; iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    bFlag = false;
                }
            }
            return bFlag;
        }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Number nobj(iValue);
    bRet = nobj.CheckPrime();

    if(bRet == true)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }    

    return 0;
}