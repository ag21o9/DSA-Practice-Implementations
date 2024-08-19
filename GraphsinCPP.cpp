#include<iostream>
using namespace std;

int main(){


    // Matrix Method
    int n=5,m=5;

    // cin>>n,m;/

    int adj[n+1][m+1];

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u,v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

}