#include<iostream>
using namespace std;

void printsum(int arr[][5],int row,int col){
    for(int i=0;i<row;i++){
    int sum = 0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
};
void printsumc(int arr[][5],int row,int col){
    for(int i=0;i<col;i++){
    int sum = 0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<sum<<endl;
    }
};


int main(){
    int arr[][5] = {{1,3,0,5,6},{2,5,7,2,13},{3,2,1,3,1}};

    printsum(arr,3,5);
    cout<<"\n";
    printsumc(arr,3,5);
}
