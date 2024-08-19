#include<iostream>
using namespace std;

int main(){

    int * num = new int;
    *num = 5;
    cout<<*num<<endl;
    delete num;

    int *arr = new int[5];
    arr[0] = 4;
    arr[1] = 7;
    cout<<*++arr<<endl;
    delete [] arr;


    int **arr2 = new int*[10];

    int n = 10;
    for(int i=0;i<n;i++){
        arr2[i] = new int[n];
    };

    arr2[0][0] = 3;
    arr2[0][1] = 6;
    arr2[0][3] = 9;
    arr2[1][3] = 2;
    cout<<arr2[0][0]<<endl;
    cout<<arr2[0][1]<<endl;
    cout<<arr2[0][3]<<endl;
    cout<<arr2[1][3]<<endl;


    for(int i=0;i<n;i++){
        delete []arr2[i];
    }

    delete []arr2;


}