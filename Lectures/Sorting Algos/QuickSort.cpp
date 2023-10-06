#include <iostream>
using namespace std;

int Partition(int sarr[] , int Start , int End)
{   
    int pivot = sarr[Start];
    int i = Start + 1;
    int j = End;
    int temp = 0;

    do
    {
        while(sarr[i] <= pivot)
        {
            i++;
        }

        while(sarr[j] > pivot)
        {
            j--;
        }

        if(i < j)
        {
            temp = sarr[i];
            sarr[i] = sarr[j];
            sarr[j] = temp;
        }
    } while (i < j);

    temp = sarr[j];
    sarr[j] = sarr[Start];
    sarr[Start] = temp;
    
    return j;
}

void QuickSort(int sarr[], int Start , int End)
{
    int PivotIndex = 0;

    if(Start < End )
    {
        PivotIndex = Partition(sarr , Start , End);
        QuickSort(sarr , Start , PivotIndex - 1);
        QuickSort(sarr , PivotIndex+1 , End);
    }
}

int main()
{
    int arr[5] = {23, 67, 87, 65, 34};

    QuickSort(arr, 1 , 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}