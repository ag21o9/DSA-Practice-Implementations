#include <iostream>
using namespace std;

class stack
{
public:
    int top;
    int size;
    int *arr;

    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
        
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    void peak(){
        if(top>=0){
            cout<<arr[top]<<endl;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    bool isempty(){
        if(top==-1){
            return 1;
        }
        else{
            return false;
        }
    }
};

int main()
{

    stack st1(5);
    st1.push(22);
    st1.pop();
    st1.peak();
}