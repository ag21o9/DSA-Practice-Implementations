#include<iostream>
using namespace std;

// template <class t>
int getPivot(int arr[], int size){
    int s = 0;
    int e = size-1;
    int m = s + ((e-s)/2);
    while (s<e)
    {
        if(arr[m]>arr[0]){
            s = m+1;
        }
        else{
            e = m;
        }
        m = s + ((e-s)/2);
    }
    return arr[m];
    
}

int main(){
    // [1,2,3,7,9]  ------>  [7,9,1,2,3]
    int arr[] = {7,9,10,11,2,3,5};
    cout<<getPivot(arr,7);

}