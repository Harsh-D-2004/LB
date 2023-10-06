#include<iostream>
using namespace std;

void ShellSort(int * Arr , int iSize)
{
    int gap = 0;
    int j = 0;
    int i = 0;
    int temp = 0;
    
    for(gap = iSize/2 ; gap >= 1 ; gap = gap/2)
    {
        for(j = gap ; j < iSize ; j++)
        {
            for(i = j - gap ; i >= 0 ; i = i - gap)
            {
                if(Arr[i + gap] > Arr[i])
                {
                    break;  
                }
                else
                {
                    temp = Arr[i];
                    Arr[i] = Arr[i + gap];
                    Arr[i + gap] = temp;
                }
            }
        }
    }
}

int main()
{
    int Arr[7] = {23 , 4 , 5 , 78 , 9 , 10 , 5};

    for(int i = 0 ; i < 7 ; i++)
    {
        cout<<Arr[i]<<"\t";
    }

    cout<<"\n";

    ShellSort(Arr , 7);

    for(int i = 0 ; i < 7 ; i++)
    {
        cout<<Arr[i]<<"\t";
    }

    return 0;
}