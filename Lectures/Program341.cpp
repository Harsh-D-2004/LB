#include<iostream>
using namespace std;

void Swap(int &No1 , int &No2)
{
    int temp = 0;
    temp = No1;
    No1 = No2;
    No2 = temp;
}

void Swap(double &No1 , double &No2)
{
    double temp = 0;
    temp = No1;
    No1 = No2;
    No2 = temp;
}

int main()
{
    int A = 10 , B = 20;
    Swap(A , B);

    cout<<"Data after swapping : "<<"\n";
    cout<<"A : "<<A<<"\n";
    cout<<"B : "<<B<<"\n";


    double X = 10.987 , Y = 20.567;
    Swap(X , Y);

    cout<<"Data after swapping : "<<"\n";
    cout<<"A : "<<X<<"\n";
    cout<<"B : "<<Y<<"\n";

    return 0;
}