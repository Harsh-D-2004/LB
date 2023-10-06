#include<iostream>
using namespace std;

template<class T>
T AddArray(T Arr[] , int Size)
{
    int iCnt = 0;
    T iSum;
    for(iCnt = 0 ; iCnt < Size ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int Arr[] = {10 , 20 , 30 , 40};
    double Brr[] = {10.678 , 20.456 , 30.234 , 40.123};

    int iRet = 0; 
    iRet = AddArray(Arr , 4);
    cout<<"Addition is : "<<iRet<<"\n";
    double dRet = 0.0;
    dRet = AddArray(Brr , 4);
    cout<<"Addition is : "<<dRet<<"\n";

    return 0;
}