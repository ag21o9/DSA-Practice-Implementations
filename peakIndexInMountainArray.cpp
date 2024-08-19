#include <iostream>
using namespace std;

int peakIndex(int arr[], int size)
{
    int s = 0;
    int e = (size - 1);
    int m = s + ((e - s) / 2);
    while (s < e)
    {
        if (arr[m] < arr[m + 1])
        {
            s = m + 1;
        }
        else
        {
            e = m;
            // return arr[m];
        }
        m = (s + e) / 2;
    }
    return arr[m];
};

int main()
{

    int arr[] = {7, 8, 9, 6, 5, 4, 3, 2, 1};
    cout << peakIndex(arr, 9);
}