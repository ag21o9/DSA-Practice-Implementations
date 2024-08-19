#include<iostream>
#include<vector>
using namespace std;

int fibbo(int num, vector<int>&dp){
    if(num<=1){
        return num;
    }
    if(dp[num]!=-1)return dp[num];
    return dp[num] = fibbo(num-1,dp) + fibbo(num-2,dp);
}

int main(){
    cout<<"enter num "<<endl;
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<fibbo(n,dp);
}