#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    int ch = '\0';

    for(int i = 1 ; i <= iValue ; i++)
    {
        cout<<ch<<"\t";
        ch++;
    }


    return 0;
}