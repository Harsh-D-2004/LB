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

        bool CheckPerfect()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    iSum = iSum + iCnt;
                }
            }

            if(iSum == iNo)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    Number nobj(iValue);
    bRet = nobj.CheckPerfect();

    if(bRet == true)
    {
        cout<<"The number is perfect\n";
    }
    else
    {
        cout<<"The number is not perfect\n";
    }

    return 0;
}