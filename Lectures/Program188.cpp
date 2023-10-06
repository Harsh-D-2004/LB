/*
    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/

#include<iostream>
using namespace std;

class Pattern
{
    public:

    int iRow;
    int iCol;

    Pattern(int X , int Y)
    {
        iRow = X;
        iCol = Y;
    }

    void Display()
    {
        int i = 0 , j = 0;

        for(int i = 1 ; i <= iRow ; i++)
        {
            for(int j = 1 ; j <= iCol ; j++)
            {
                cout<<"*"<<"\t";
            }
            cout<<"\n";
        }
    }
};




int main()
{
    int iNo1 , iNo2 = 0;

    cout<<"Enter the number of rows : \n";
    cin>>iNo1;

    cout<<"Enter the number of columns : \n";
    cin>>iNo2;

    Pattern pobj(iNo1 , iNo2);

    pobj.Display();
    
    return 0;
}