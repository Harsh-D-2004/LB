#include<iostream>
using namespace std;

void Display(int Arr[] , int Size)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < Size ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Arr[] = {10 , 20 , 30 , 40};

    Display(Arr , 4);

    return 0;
}