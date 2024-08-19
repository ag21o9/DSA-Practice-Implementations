#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{

    int pivot = arr[s];
    int count = 0;

    for (int i = s; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }
    int pivotIndex = count + s;
    swap(arr[s], arr[pivotIndex]);
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= arr[pivotIndex])
        {
            i++;
        }
        while (arr[j] >= arr[pivotIndex])
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quicksort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    quicksort(arr, s, p-1);
    quicksort(arr, p + 1, e);
}

int main()
{
    int arr[] = {3, 6, 2, 1, 3, 4};
    int size = 6;

    quicksort(arr, 0, 5);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}