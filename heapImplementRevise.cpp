#include <iostream>
using namespace std;

class heap
{
public:
    int *arr;
    int size;
    int s;
    // int index;
    heap(void)
    {
        arr = new int[100];
        size = 0;
        arr[0] = -1;
        // index = 0;
    }

    void insert(int data)
    {
        size = size + 1;
        int index = size;
        arr[index] = data;
        while (index > 1)
        {
            int p = index / 2;
            if (arr[index] > arr[p])
            {
                swap(arr[index], arr[p]);
                index = p;
            }
            else
            {
                return;
            }
        }
    }
    void remove()
    {
        if(size==0){
            return;
        }
        arr[1] = arr[size];
        size--;

        int index = 1;

        while (index < size)
        {
            int leftp = 2 * index;
            int rightp = 2 * index + 1;

            if (leftp < size && arr[index] < arr[leftp])
            {
                swap(arr[index], arr[leftp]);
                index = leftp;
            }
            else if (rightp < size && arr[index] < arr[rightp])
            {
                swap(arr[index], arr[rightp]);
                index = rightp;
            }
            else
            {
                return;
            }
        }
    }
    void printVal(void)
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    void heapify(int arr2[], int size, int i)
    {
        int curr = i;
        int lc = 2 * i;
        int rc = 2 * i + 1;

        if (lc <= size && arr2[lc] > arr2[curr])
        {
            curr = lc;
        }
        if (rc <= size && arr2[rc] > arr2[curr])
        {
            curr = rc;
        }

        if (curr != i)
        {
            swap(arr2[i], arr2[curr]);
            heapify(arr2, size, curr);
        }
    }
};

int main()
{

    heap h1;
    h1.insert(4);
    h1.insert(6);
    h1.insert(2);
    h1.insert(11);
    h1.printVal();

    int arr[] = {-1,54,53,55,52,50};
    for(int i=5/2;i>0;i--){
        h1.heapify(arr,5,i);
    }
    cout<<endl;
    for(int i=1;i<=5;i++){
        cout<<arr[i]<<" ";
    }
}