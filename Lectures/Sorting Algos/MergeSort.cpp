#include <iostream>
using namespace std;

void Merge(int *Arr, int low, int mid, int high)
{
    int i = low;
    int j = (mid + 1);
    int k = low;
    int Brr[high + 1];

    if (k <= high)
    {
        while (i <= mid && j <= high)
        {
            if (Arr[i] <= Arr[j])
            {
                Brr[k] = Arr[i];
                i++;
                k++;
            }
            else if (Arr[j] < Arr[i])
            {
                Brr[k] = Arr[j];
                j++;
                k++;
            }
        }

        while (i <= mid)
        {
            Brr[k] = Arr[i];
            i++;
            k++;
        }

        while (j <= high)
        {
            Brr[k] = Arr[j];
            j++;
            k++;
        }
    }

    for (int i = 0 ; i < (high + 1) ; i++)
    {
        Arr[i] = Brr[i];
    }
}

void MergeSort(int *Arr, int low, int high)
{
    int mid = 0;
    mid = (low + high) / 2;
    if (low < high)
    {
        MergeSort(Arr, low, mid);
        MergeSort(Arr, mid + 1, high);
        Merge(Arr, low, mid, high);
    }
}

int main()
{
    int Arr[7] = {12, 4, 6, 8, 2, 45, 33};

    for (int i = 0; i < 7; i++)
    {
        cout << Arr[i] << "\t";
    }

    cout << "\n";

    MergeSort(Arr, 0, 6);

    for (int i = 0; i < 7; i++)
    {
        cout << Arr[i] << "\t";
    }

    return 0;
}