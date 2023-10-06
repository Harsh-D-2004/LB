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

        bool CheckPrime()
        {
            int iCnt = 0;
            bool bFlag = true;
            for(iCnt = 2 ; iCnt < iNo ; iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    bFlag = false;
                    break;
                }
            }
            return bFlag;
        }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    Number nobj(iValue);

    bRet = nobj.CheckPrime();

    if(bRet == true)
    {
        cout<<"The number is prime \n";
    }
    else
    {
        cout<<"Not prime \n";
    }

    return 0;
}