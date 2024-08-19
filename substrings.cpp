#include<iostream>
#include<vector>

using namespace std;


void getSubs(vector<int> q, vector<vector<int>>& ans, int index, vector<int> emp){
    if(index==q.size()){
        ans.push_back(emp);
        return;
    }

    emp.push_back(q[index]);
    getSubs(q,ans,index+1,emp);
    emp.pop_back();
    getSubs(q,ans,index+1,emp);
    
}


int main(){
    vector<int> query;
    vector<int> emp;
    query.push_back(3);
    query.push_back(4);
    query.push_back(5);
    query.push_back(6);

    vector<vector<int>> ans;
    getSubs(query,ans,0,emp);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}