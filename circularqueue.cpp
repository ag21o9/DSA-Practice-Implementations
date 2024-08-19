#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    Queue(int n)
    {
        size = n;
        qfront = 0;
        rear = 0;
        arr = new int[size];
    }

    bool isEmpty()
    {
        if (qfront == rear)
        {
            return true;
        }
        return false;
    }

    void enqueue(int data)
    {
        if ((qfront == 0 && rear == size - 1) || (rear == (qfront - 1) % (size - 1)))
        {
            cout << "queue is full" << endl;
        }
        if (qfront != 0 && rear == size - 1)
        {
            rear = 0;
            arr[rear] = data;
            rear++;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (qfront == -1)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            return ans;
        }
    }

    int front()
    {
        if (rear == qfront)
        {
            return -1;
        }
        return arr[qfront];
    }
};

int main()
{
}