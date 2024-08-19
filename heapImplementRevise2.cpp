#include<iostream>
using namespace std;


class Heap{
    public:
    int arr[100];
    int size;

    Heap(void){
        size = 0;
        arr[0] = -1;
    }

    void insert(int data){
        size = size+1;

        int index = size;
        arr[size] = data;

        while(index>1){
            int p = index/2;
            if(arr[p]<arr[index]){
                swap(arr[p],arr[index]);
                index = p;
            }
            else{
                break;
            }
        }
    }


    void deleteval(){
        arr[1] = arr[size--];
        int curr = 1;

        while(curr<size){
            int root = curr;
            int lp = 2*curr;
            int rp = 2*curr + 1;

            if(lp<size && arr[lp]>arr[curr]){
                curr = lp;
            }
            if(rp<size && arr[rp]>arr[curr]){
                curr = rp;
            }
            if(curr!=root){
                swap(arr[curr],arr[root]);
                root = curr;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
};


void heapify(int * arr, int i, int n){
    int root = i;

    int li = 2*root;
    int ri = 2*root + 1;
    if(li<=n && arr[root]<arr[li]){
        root = li;
    }
    if(ri<=n && arr[root]<arr[ri]){
        root = ri;
    }
    if(root!=i){
        swap(arr[i],arr[root]);
        heapify(arr,root,n);
    }
    else{
        return;
    }
}

int main(){
    Heap h;
    // h.print();
    int arr[] = {-1,2,5,9,2,5,};
    int n = 6;
    for(int i=n/2;i>0;i--){
        heapify(arr,i,n);
    }
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
}