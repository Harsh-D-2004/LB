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
            for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
            {
                printf("*\t");
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Pattern pobj(iValue);
    pobj.Display();

    return 0;
}