#include<iostream>
using namespace std;


class heap{

    public:
    int arr[100];
    int size;

    heap(void);

    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;

        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }

        }
    }

    void deleteVal(){
        if(size==0){
            return ;
        }
        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i<=size){
            int root = i;
            int li = 2*i;
            int ri = 2*i + 1;

            if(li<size && arr[i]<arr[li]){
                // swap(arr[i],arr[li]);
                i = li;
            }
            if(ri<size && arr[i]<arr[ri]){
                // swap(arr[i],arr[ri]);
                i = ri;
            }
            if(i==root){
                return;
            }
            else{
                swap(arr[root],arr[i]);
            }
        }
    }

    void heapsort(int arr[], int n){
        int size = n;
        while(size>1){
            swap(arr[size],arr[1]);
            size--;

            heapify(arr,size,1);
        }
    }

    void heapify(int arr[], int size, int i){
        
        int root = i;
        
        int li = 2*i;
        int ri = 2*i + 1;

        if(li<=size && arr[root]<arr[li]){
            root = li;
        }
        if(ri<=size && arr[root]<arr[ri]){
            root = ri;
        }

        if(root!=i){
            swap(arr[root],arr[i]);
            heapify(arr,size,root);
        }
        
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }

};


heap :: heap(void){
    arr[0] = -1;
    size = 0;
}

int main(){

//     heap h;
//     int arr[] = {-1,54,53,55,52,50};
//     for(int i=5/2;i>0;i--){
//         h.heapify(arr,5,i);
//     }
//     for(int i=1;i<=5;i++){
//         cout<<arr[i]<<" ";
//     }
// cout<<endl;
//     h.heapsort(arr,5);
//     for(int i=1;i<=5;i++){
//         cout<<arr[i]<<" ";
//     }


//     h.print();

    heap h;
    h.insert(1);
    h.insert(7);
    h.insert(2);
    h.insert(6);
    h.insert(9);
    h.insert(3);
    h.insert(8);
    h.deleteVal();
    h.deleteVal();
    h.deleteVal();
    h.print();

    
}