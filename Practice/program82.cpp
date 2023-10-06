#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iNo;
    public:
        Pattern(int X)
        {
            iNo = X;
        }
        void Display()
        {
            int iCnt = 0;
            for(iCnt = 0 ; iCnt <= iNo ; iCnt++)
            {
                printf("%d\t" , iCnt);
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the no : \n";
    cin>>iValue;

    Pattern pobj(iValue);
    pobj.Display();

    return 0;
}