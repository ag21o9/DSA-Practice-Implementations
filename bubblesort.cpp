#include <iostream>
using namespace std;

void bubblesort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int swapped = 0;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }
};

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
};

int main()
{

    int arr[] = {7, 3, 6, 1, 4, 2, 9};
    int size = 7;
    display(arr, size);
    cout << endl;
    bubblesort(arr, 7);
    display(arr, size);
}