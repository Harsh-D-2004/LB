#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow;
        int iCol;

    public:
        Pattern(int X , int Y)
        {
            iRow = X;
            iCol = Y;
        }    

        void Print()
        {
            int i = 0;
            int j = 0;

            for(i = 1 ; i<=iRow ; i++)
            {
                for(j = 1 ; j <= iCol ; j++)
                {
                    if(i % 2 == 0)
                    {
                        cout<<"*\t";
                    }
                    else
                    {
                        cout<<j<<"\t";
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

    cout<<"Enter the number of rows: "<<"\n";
    cin>>iValue1;

    cout<<"Enter the number of columns: "<<"\n";
    cin>>iValue2;

    Pattern pobj(iValue1 , iValue2);
    pobj.Print();

    return 0;
}