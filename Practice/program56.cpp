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

            for(iCnt = 1 , ch = 'a'; iCnt <= iNo ; iCnt++)
            {
                printf("%c\t" , ch);
                ch++;
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the frequency : \n";
    cin>>iValue;

    Display dobj(iValue);
    dobj.Disp();

    return 0;
}