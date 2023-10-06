#include<iostream>
using namespace std;

class Display
{
    private:
        int iRow;
        int iCol;
    
    public:
        Display(int X , int Y)
        {
            iRow = X;
            iCol = Y;
        }

        void Disp()
        {
            int i , j = 0;

            for(i = 1 ; i <= iRow ; i++)
            {
                for(j = 1; j <= iCol ; j++)
                {
                    if(i == j)
                    {
                        printf("*\t");
                    }
                    else if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
                    {
                        printf("$\t");
                    }
                    else
                    {
                        printf(" \t");
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

    cout<<"Enter the rows : \n";
    cin>>iValue1;

    cout<<"Enter the cols : \n";
    cin>>iValue2;

    Display dobj(iValue1 , iValue2);
    dobj.Disp();

    return 0;
}