#include <iostream>
using namespace std;

template <class X>
class Engineer
{
};

int partion(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }
    int pivotIndex = count + s;
    swap(arr[s], arr[count + s]);

    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] >= pivot)
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

    int p = partion(arr, s, e);

    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] =  {3,6,2,1,3,4};
    int size = 6;
    quickSort(arr, 0, 5);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}