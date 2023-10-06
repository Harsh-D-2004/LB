#include<iostream>
using namespace std;

bool BinarySearch(string arr[] , int iSize)
{
    int start = 0 , end = iSize - 1;
    int mid = 0;
    bool flag = false;

    while(start < end)
    {
        mid = start + (end - start)/2;

        if(arr[mid] == "Vedant")
        {
            flag = true;
            break;
        }
        else if(arr[mid] < "Vedant")
        {
            start = mid + 1;
        }
        else if(arr[mid] > "Vedant")
        {
            end = mid - 1;
        }
    }
    return flag;
}

int main()
{
    string arr[4] = {"Harsh" , "kartik" , "john"};

    bool bret = false;

    bret = BinarySearch(arr , 4);

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