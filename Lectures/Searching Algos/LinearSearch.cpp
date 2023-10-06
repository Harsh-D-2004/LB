#include<iostream>
using namespace std;

bool LinearSearch(string arr[] , int iSize)
{
    bool flag = false;
    int i = 0;

    for(i = 0 ; i < iSize ; i++)
    {
        if(arr[i] == "Vedant")
        {
            flag = true;
            break;
        }
        flag = false;
    }

    if(flag == true)
    {
        return true;
    }
    return false;
}

int main()
{
    string arr[4] = {"Harsh" , "kartik" , "john"};

    bool bret = false;

    bret = LinearSearch(arr , 4);

    if(bret == true)
    {
        cout<<"Element is present";
    }
    else
    {
        cout<<"Element is absent";
    }


    return 0;
}