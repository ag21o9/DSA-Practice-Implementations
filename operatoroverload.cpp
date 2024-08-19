#include<iostream>
using namespace std;


template<class x>
class vector{
    private:
        int size;
        x * arr;
        int index;
    public:
        vector(){
            index = 0;
            size = 100;
        };
        vector(int size){
            this->size = size;
            index = 0;
        }

        int operator[](int a){
            return arr[a];
        }

        void push_back(x a){
            arr[index++] = a;
        }
        void pop_back(){
            arr[--index] = -1;
            // index--;
        }

};


int main(){
    vector<int> v1(50);
    v1.push_back(1);
    v1.pop_back();
    v1.push_back(9);
    v1.pop_back();
    v1.push_back(9);
    v1.push_back(11);
    v1.push_back(88);
    v1.push_back(84);
    cout<<v1[3];
}