#include<iostream>
using namespace std;

class Digit
{
    private:
        int iRow;
        int iCol;

    public:

        Digit(int X , int Y)
        {
            iRow = X;
            iCol = Y;
        }    

        void Display()
        {
            int i , j = 0;

            for(i = iRow ; i >= 1 ; i--)
            {
                for(j = 1 ; j <= iCol ; j++)
                {
                    if(i == j)
                    {
                        printf("#\t");
                    }
                    else
                    {
                        printf("*\t");
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
    int iRet = 0;

    cout<<"Enter the rows : "<<"\n";
    cin>>iValue1;

    cout<<"Enter the cols : "<<"\n";
    cin>>iValue2;

    Digit dobj(iValue1 , iValue2);
    dobj.Display();

    return 0;
}