#include<iostream>
using namespace std;

class queue{
    public:
        int * arr;
        int rear;
        int front;
        int size;
        queue(int s);

        void enqueue(int val){
            if((front==0 && rear == size-1) || (rear==(front-1)%(size-1))){
                cout<<"queue is full"<<endl;
                return;
            }
            else if(front==-1){
                front = rear = 0;
            }
            else if(rear==size-1 && front!=0){
                rear = 0;
            }
            else{
                rear++;
            }
            arr[rear] = val;
        }
        int dequeue(){
            if(front==-1){
                cout<<"queue is already empty"<<endl;
                // return -1;
            }
            int ans = arr[front];
            arr[front] = -1;
            if(front==size-1){
                front = 0;
            }
            else if(front==rear){
                front=rear=-1;
            }
            else{
                front++;
            }
            return ans;
        }
        int top(){
            if(front==-1){
                cout<<"Empty Queue"<<endl;
                return -1;
            }
            return arr[front];
        }
};

queue :: queue(int s){
    size = s;
    arr = new int[size];
    rear = front = -1;
}

int main(){
    queue s(5);
    s.enqueue(3);
    s.enqueue(6);
    s.enqueue(1);
    s.enqueue(8);
    s.enqueue(2);
    s.dequeue();
    s.enqueue(11);
    // s.enqueue(13);
    s.dequeue();
    s.enqueue(13);
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.enqueue(10);
    cout<<s.top()<<endl;

}