#include<iostream>
using namespace std;

template <class T>
T Addition(T no1 , T no2)
{
    T Ans;
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


    float L = 10.987f , M = 20.7484f;
    float Ret3 = 0.0f;

    Ret2 = Addition(L , M);
    cout<<"Additon is : "<<Ret3<<"\n";

    return 0;
}