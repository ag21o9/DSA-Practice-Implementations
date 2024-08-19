#include <iostream>
using namespace std;

// template<class k>
class kqueue
{
public:
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freespot;
    int n;
    int k;
    kqueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        arr = new int[n];
        next = new int[n];
        freespot = 0;
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
    }

    void enqueue(int data, int qm)
    {
        if (freespot == -1)
        {
            cout << "No free space available" << endl;
            return;
        }
        int index = freespot;
        freespot = next[index];
        if (front[qm - 1] == -1)
        {
            front[qm - 1] = index;
        }
        else
        {
            next[rear[qm - 1]] = index;
        }
        next[index] = -1;
        rear[qm - 1] = index;
        arr[index] = data;
    }
    int pop(int qm)
    {
        if (front[qm - 1] == -1)
        {
            cout << "Empty queue" << endl;
            return -1;
        }
        int index = front[qm - 1];
        front[qm - 1] = next[index];
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
    int top(int qm)
    {
        if (front[qm - 1] == -1)
        {
            return -1;
        }
        else
        {
            return arr[front[qm - 1]];
        }
    }
};

int main()
{

    kqueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(14, 1);
    q.enqueue(36, 1);
    // q.enqueue(10,1);
    // cout<<q.pop(1)<<endl;
    // cout<<q.pop(1)<<endl;
    cout << q.top(1);
}