#include<iostream>
#include<vector>
using namespace std;


void getstrings(string s,vector<string> &ans, int index){
    if(index==s.size()){
        ans.push_back(s);
        return;
    }

    for(int i=index;i<s.size();i++){
        swap(s[index],s[i]);
        getstrings(s,ans,index+1);
        swap(s[index],s[i]);
    }
}

int main(){
    string s = "abhijeet";
    // string res = "";
    vector<string> ans;

    getstrings(s,ans,0);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }




}