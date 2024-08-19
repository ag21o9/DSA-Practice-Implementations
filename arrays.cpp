#include <iostream>
using namespace std;

void max_arr(int *a, int size)
{
    int max = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (*(a + i) > max)
        {
            max = *(a + i);
        }
    }
    cout << max << endl;
}
void min_arr(int *a, int size)
{
    int min = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (*(a + i) < min)
        {
            min = *(a + i);
        }
    }
    cout << min << endl;
}

void reverse(int arr[], int size)
{
    if (size & 1 == 0)
    {

        for (int i = 0, j = (size - 1); i != j; i++, j--)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    else
    {
        for (int i = 0, j = 9; (i - j) != 1; i++, j--)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
};

void swapAlter(int arr[], int size)
{
    if ((size & 1) == 1)
    {
        for (int i = 0; i < (size - 1); i += 2)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    else
    {
        for (int i = 0; i < (size); i += 2)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
};

int main()
{
    int arr[] = {3, 9, 2, 6, 5, 9, 4, 4, 2, 9, 3, 5, 9};
    int ans = 0;
    for (int i = 0; i < 13; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;

    // swapAlter(arr, 9);
    // for (int i = 0; i < 9; i++)
    // {
    //     cout << arr[i] << endl;
    // }
}