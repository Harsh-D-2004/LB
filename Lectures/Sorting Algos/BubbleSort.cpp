#include <iostream>
using namespace std;

void InsertionSort(int sarr[], int iSize)
{
    int i = 0, j = 0;
    int temp;
    bool flag = false;

    for (i = 0; i < iSize; i++)
    {
        flag = false;

        for (j = 0; j < iSize - 1; j++)
        {

            if (sarr[j] > sarr[j + 1])
            {
                temp = sarr[j];
                sarr[j] = sarr[j + 1];
                sarr[j + 1] = temp;
                flag = true;
            }
        }
        
        if (flag == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[5] = {23, 67, 87, 65, 34};

    InsertionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}