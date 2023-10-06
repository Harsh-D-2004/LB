#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow;
        int iCol;
    public:
        Pattern(int x , int y)
        {
            iRow = x;
            iCol = y;
        }
        void Display()
        {
            int i = 0;
            int j = 0;
            for(i = iRow ; i>=1 ; i--)
            {
                for(j = 1 ; j<=iCol ; j++)
                {
                    if((i == j) || (i < j))
                    {
                        cout<<"*\t";
                    }
                }
                cout<<"\n";
            }
        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter rows : \n";
    cin>>iValue1;

    cout<<"Enter cols : \n";
    cin>>iValue2;

    Pattern pobj(iValue1 , iValue2);
    pobj.Display();

    return 0;
}