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
            char ch = '\0';
            ch = 'a';

            for(i = 1 ; i <= iRow ; i++)
            {
                for(j = 1 ; j <= iCol ; j++)
                {
                    if(i == j)
                    {
                        printf("*\t");
                    }
                    else
                    {
                        printf("%c\t" , ch);
                    }
                }
                ch++;
                printf("\n");
            }
        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter Rows : \n";
    cin>>iValue1;

    cout<<"Enter Cols : \n";
    cin>>iValue2;

    Pattern pobj(iValue1 , iValue2);
    pobj.Display();

    return 0;
}