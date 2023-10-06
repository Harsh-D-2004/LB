#include<iostream>
using namespace std;

void SelectionSort(string sarr[] , int iSize)
{
    int i = 0 , j = 0;
    int min_index = 0;
    string temp;

    for(i = 0 ; i < iSize - 1 ; i++)
    {
        min_index = i;

        for(j = i + 1 ; j < iSize ; j++)
        {
            if(sarr[j] > sarr[min_index])
            {
                min_index = j;
            }

            temp = sarr[j];
            sarr[j] = sarr[min_index];
            sarr[min_index] = temp;
        }
    }
}

int main()
{
    string arr[5];

    arr[0] = "Harsh";
    arr[1] = "Varad";
    arr[2] = "Sudesh";
    arr[3] = "Yatin";
    arr[4] = "Liam";

    SelectionSort(arr , 5);

    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<arr[i]<<"\n";
    }

    return 0;
}