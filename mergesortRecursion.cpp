#include <iostream>
using namespace std;

int merge(int *arr, int s, int e)
{
    int inv = 0;
    int mid = s + ((e - s) / 2);

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int mainindex = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[mainindex++];
    }

    mainindex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[mainindex++];
    }

    int i = 0, j = 0, k = s;
    // cout<<s<<endl;
    // cout<<endl;
    while (i < len1 && j < len2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
            inv += len1-i;
        }

    }

    while (i < len1)
    {
        arr[k++] = arr1[i++];
    }

    while (j < len2)
    {
        arr[k++] = arr2[j++];
    }

    delete []arr1;
    delete []arr2;
    return inv;
}

int mergesort(int *arr, int s, int n)
{
    int inv = 0;
    if (s >= n)
    {
        return 0;
    }

    int mid = s + ((n - s) / 2);

    inv += mergesort(arr, s, mid);
    inv += mergesort(arr, mid + 1, n);
    inv += merge(arr, s, n);
    return inv;
}

int main()
{

    int arr[7] = {5, 6, 3, 2, 1, 9, 8};

    mergesort(arr, 0, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}