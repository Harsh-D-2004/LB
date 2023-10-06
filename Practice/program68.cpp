#include<iostream>
using namespace std;

class Display
{
    private:
        int iNo;
    
    public:
        Display(int X)
        {
            iNo = X;
        }

        void Disp()
        {
            int iCnt = 0;
            char ch = '\0';
            for(iCnt = 1 , ch = 'A' ; iCnt <= iNo ; iCnt++)
            {
                cout<<ch<<"\t";
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter Frequency : \n";
    cin>>iValue;

    Display dobj(iValue);
    dobj.Disp();

    return 0;
}