#include <iostream>
using namespace std;

int BinSearch(int sz, int arr[], int st)
{
    int size = sz;
    int s = st, e = (size);
    int target;
    cin >> target;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == target)
        {
            return mid;
            break;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 5, 7, 9, 10, 13, 21, 29};
    cout << BinSearch(9, arr, 0);
}