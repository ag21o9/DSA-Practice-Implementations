#include<iostream>
using namespace std;

void merge(int * arr, int s, int e){
    int mid = s+((e-s)/2);
    int len1 = mid-s+1;
    int len2 = e-mid;

    int * arr1 = new int[len1];
    int * arr2 = new int[len2];

    int index = s;
    for(int i=0;i<len1;i++){
        arr1[i] = arr[index++];
    }
    index = mid+1;
    for(int i=0;i<len2;i++){
        arr2[i] = arr[index++];
    }

    index = s;
    int i=0;
    int j=0;

    while(i<len1 && j<len2){
        if(arr1[i]<arr2[j]){
            arr[index++] = arr1[i++];
        }
        else{
            arr[index++] = arr2[j++];
        }
    }

    while(i<len1){
        arr[index++] = arr1[i++];
        
    }
    while(j<len2){
        arr[index++] = arr2[j++];
    }

    delete[] arr1;
    delete[] arr2;
    // delete arr2[];
}


void mergesort(int * arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = s+((e-s)/2);
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    merge(arr,s,e);
}

int main(){

    int arr[] = {9,7,4,0,3,4,10,9};
    int size = 8;


    mergesort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

}