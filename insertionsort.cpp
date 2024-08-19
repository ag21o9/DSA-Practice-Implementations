#include <iostream>
// jinni jinni aaja
using namespace std;

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
};

// void insertionsort(int *arr, int size)
// {
//     for (int i = 1; i < size; i++)
//     {
//         int j = i - 1;
//         int temp = arr[i];
//         for (; j >= 0; j--)
//         {
//             if (arr[j] > temp)
//             {
//                 arr[j + 1] = arr[j];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         arr[j + 1] = temp;
//     }
// }
void insertionsort(int *arr, int size)
{
    int i = 1;
    while (i <= size - 1)
    {
        int j = i - 1;
        int temp = arr[i];
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
        i++;
    }
}

int main()
{
    int arr[] = {7, 3, 6, 1, 4, 2, 9};
    int size = 7;
    display(arr, size);
    insertionsort(arr, size);
    cout << endl;
    display(arr, size);
}