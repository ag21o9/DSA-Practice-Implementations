#include<iostream>
using namespace std;

int binarySearch(int *arr, int target, int size){
    int s = 0;
    int e = size-1;
    int mid = s+((e-s)/2);
    int value = -1;
    while(s<=e){
        if(arr[mid]==target){
            value = mid;
            return value;
            break;
        }
        else if(target>arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+((e-s)/2);
    }

    return value;
}

int returnPivot(int *arr, int size){
    int s = 0;
    int e = size-1;
    int mid = s+((e-s)/2);
    while (s<e)
    {
        if(arr[mid]>arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+((e-s)/2);
    }
    return mid;
    
}


int main(){
    int arr[] = {4,6,8,1,3};
    cout<<returnPivot(arr,5)<<endl;

    // Binary Search trials
    int arrForBs[] = {1,3,6,9,10,13};
    cout<<binarySearch(arrForBs,13,6)<<endl;
    // Binary Search ended;



}