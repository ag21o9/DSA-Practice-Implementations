#include<iostream>
using namespace std;

void merge(int *arr1,int n,int *arr2,int m, int *arr3){
    int i=0,j=0;
    int k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    while(j<m){
        arr3[k++] = arr2[j++];
    }
}

int main(){

    int arr[] = {1,3,5,7,9};
    int arr2[] = {2,4,6};
    int arr3[8];
    merge(arr,5,arr2,3,arr3);
    for(auto i:arr3){
        cout<<i<<endl;
    }
    return 0;
}