#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < temp)
            {
                arr[i] = arr[j];
                arr[j] = temp;
                temp = arr[i];

            };
        }
    }
}

int main()
{
    int arr[] = {2, 95, 3, 26, 672, 6, 3};
    selectionSort(arr, 7);
    for (auto i : arr)
    {
        cout << i << " ";
    }
}