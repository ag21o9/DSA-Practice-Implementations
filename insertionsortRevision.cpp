#include <iostream>
using namespace std;

void InsertSort(int arr[], int s)
{
    for (int i = 1; i <= s - 1; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j > 0; j--)
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

int main()
{
    int arr[] = {2, 4, 5, 6, 7, 12, 8, 3, 9};
    InsertSort(arr, 9);
    for (auto i : arr)
    {
        cout << i << " ";
    }
}