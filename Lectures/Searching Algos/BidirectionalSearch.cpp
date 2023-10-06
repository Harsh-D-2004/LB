#include<iostream>
using namespace std;

bool BidirectionalSearch(string arr[] , int iSize)
{
    int start = 0 , end = iSize - 1;
    bool flag = false;

    while(start < end)
    {
        if(arr[start] == "Vedant" || arr[end] == "Vedant")
        {
            flag = true;
            break;
        }
        start++;
        end--;
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

    bret = BidirectionalSearch(arr , 4);

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