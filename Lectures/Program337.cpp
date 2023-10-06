#include<iostream>
using namespace std;

int Addition(int no1 , int no2)
{
    int Ans = 0;
    Ans = no1 + no2;
    return Ans;
}

double Addition(double no1 , double no2)
{
    double Ans = 0;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    int Value1 = 10 , Value2 = 20;

    int Ret1 = 0;

    Ret1 = Addition(Value1 , Value2);

    cout<<"Additon is : "<<Ret1<<"\n";

    double X = 10.987 , Y = 20.7484;

    double Ret2 = 0;

    Ret2 = Addition(X , Y);

    cout<<"Additon is : "<<Ret2<<"\n";

    return 0;
}