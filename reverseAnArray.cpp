#include<iostream>
using namespace std;

int main(){

    int arr[] = {3,4,6,2,99,1,90};
    int i = 0;
    int j = 6;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
}