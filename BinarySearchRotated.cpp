#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + ((e - s) / 2);
    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + ((e - s) / 2);
    }
    return mid;
}

int BinRotatedSearch(int arr[], int size, int t)
{
    int s, e;
    if (t >= arr[0])
    {
        s = 0;
        e = getPivot(arr, size) - 1;
    }
    else
    {
        s = getPivot(arr, size);
        e = size - 1;
    }
    int mid = s + ((e - s) / 2);
    int val = -1;
    while (s <= e)
    {
        if (arr[mid] == t)
        {
            val = mid;
            return val;
        }
        else if (arr[mid] < t)
        {
            s = mid + 1;
        }
        else if (arr[mid] > t)
        {
            e = mid - 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + ((e - s) / 2);
    }
    return val;
}

int main()
{

    int arr[] = {3,1,2};
    cout << getPivot(arr, 3) << endl;
    cout << BinRotatedSearch(arr, 3, 3) << endl;
    // cout << BinRotatedSearch(arr, 5, 7) << endl;
    // cout << BinRotatedSearch(arr, 5, 1) << endl;
    // cout << BinRotatedSearch(arr, 5, 2) << endl;
    // cout << BinRotatedSearch(arr, 5, 3) << endl;
}