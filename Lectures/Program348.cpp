#include<iostream>
using namespace std;

template<class T>
T MaxArray(T Arr[] , int Size)
{
    int iCnt = 0;
    T iMax = Arr[0];
    for(iCnt = 0 ; iCnt < Size ; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
        iCnt++;
    }

    return iMax;
}

int main()
{
    int Arr[] = {10 , 20 , 30 , 40};
    double Brr[] = {10.678 , 20.456 , 30.234 , 40.123};

    double dRet = 0.0;
    dRet = MaxArray(Brr , 4);
    cout<<"Max element is : "<<dRet<<"\n";

    int iRet = 0;
    iRet = MaxArray(Arr , 4);
    cout<<"Max element is : "<<iRet<<"\n";


    return 0;
}