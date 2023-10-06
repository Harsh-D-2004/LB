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
            if(iNo < 0)
            {
                printf("Enter the positive number \n");
            }

            for(int iCnt = 1 ; iCnt <= iNo ; iCnt++)
            {
                printf("Jay Ganesh....\n");
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the frequency : "<<"\n";
    cin>>iValue;

    Display dobj(iValue);
    dobj.Disp();

    return 0;
}