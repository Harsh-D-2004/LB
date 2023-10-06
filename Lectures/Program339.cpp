#include<iostream>
using namespace std;

void Swap(int &No1 , int &No2)
{
    int temp = 0;
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

    return 0;
}