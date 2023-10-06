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

        void Display()
        {
            int i = 0;
            int j = 0;

            for(i = 1 ; i <= iRow ; i++)
            {
                for(j = 1 ; j <= iCol ; j++)
                {
                    if((i == 1) || (i == iRow))
                    {
                        printf("*\t");
                    }
                    else
                    {
                        printf("&\t");
                    }
                }
                printf("\n");
            }
        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter rows : "<<"\n";
    cin>>iValue1;

    cout<<"Enter columns : "<<"\n";
    cin>>iValue2;

    Pattern pobj(iValue1 , iValue2);
    pobj.Display();

    return 0;
}