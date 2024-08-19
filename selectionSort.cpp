#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8,7,3,4,0,9,2,6};
    for (int i = 0; i < 8; i++)
    {
        int temp = arr[i];
        for (int j = i+1; j < 8; j++)
        {
            if(arr[j]<temp){
                arr[i] = arr[j];
                arr[j] = temp;
                temp = arr[i];
            }
                // break;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout << *(arr + i) << endl;
    }
}