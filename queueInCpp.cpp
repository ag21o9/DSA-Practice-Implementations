#include <iostream>
using namespace std;


class Queue
{
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    Queue()
    {
        size = 10000;
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
        if (rear == size)
        {
            cout << "queue is full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (qfront == rear)
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


int main(){

}