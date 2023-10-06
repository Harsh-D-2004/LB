#include<iostream>
using namespace std;

template <class T>
T Swap(T &No1 , T &No2)
{
    T temp = 0;
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