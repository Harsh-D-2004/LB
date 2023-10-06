#include<iostream>
using namespace std;

void InsertionSort(int sarr[] , int iSize)
{
    int i = 0 , j = 0;
    int selected;

    for(i = 1 ; i < iSize ; i++)
    {
        selected = sarr[i];

        for(j = i - 1 ; ((j >= 0) && (sarr[j] > selected)) ; j--)
        {
            sarr[j + 1] = sarr[j];
        }
        sarr[j+1] = selected;
    }
}

int main()
{
    int arr[5] =  {23 , 67 , 87 , 65 , 34};

    InsertionSort(arr , 5);

    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<arr[i]<<"\n";
    }

    return 0;
}