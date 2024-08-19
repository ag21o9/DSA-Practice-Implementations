#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int elem = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < elem)
        {
            count++;
        }
    }
    int pivotIndex = count + s;
    swap(arr[pivotIndex], arr[s]);
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= elem)
        {
            i++;
        }
        while (arr[j] >= elem)
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

void quickSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);
    quickSort(arr, s, p-1);
    quickSort(arr, p + 1, e);
}

int main()
{

    int arr[] = {5,1,1,2,0,0};
    int size = 6;
    quickSort(arr, 0,5);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}