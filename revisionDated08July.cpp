#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int swapp = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j + 1], arr[j]);
                swapp = 1;
            }
        }
        if (swapp == 0)
        {
            break;
        }
    }
}

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

void mergeSort(int *arr, int m, int *arr2, int n, int *arr3, int i = 0, int j = 0, int k = 0)
{
   
}

int main()
{

    int n = 7;
    int arr[6] = {6, 7, 8, 9, 10, 11};
    int arr2[5] = {1, 2, 3, 4};
    int arr3[10];

    mergeSort(arr, 6, arr2, 5, arr3);

    for (int i = 0; i < n; i++)
    {
        cout << arr3[i] << " ";
    }
}