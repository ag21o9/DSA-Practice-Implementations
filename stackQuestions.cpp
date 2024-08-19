#include<iostream>
#include<vector>
#include<stack>
using namespace std;


vector<int> getnextsmaller(vector<int> vec){
    vector<int> ans(vec.size());
    stack<int> s;
    s.push(-1);
    for(int i=vec.size()-1;i>=0;i--){
        while(s.top()>=vec[i]){
            s.pop();
        }
        ans[i] = s.top();
        s.push(vec[i]);
    }
    return ans;
}
vector<int> getprevsmaller(vector<int> vec){
    vector<int> ans(vec.size());
    stack<int> s;
    s.push(-1);
    for(int i=0;i<vec.size();i++){
        while(s.top()>=vec[i]){
            s.pop();
        }
        ans[i] = s.top();
        s.push(vec[i]);
    }
    return ans;
}


int main(){


    vector<int> v1;
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(6);
    v1.push_back(1);
    v1.push_back(7);


    vector<int> ans = getnextsmaller(v1);
    vector<int> ans2 = getprevsmaller(v1);
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < ans2.size(); i++)
    {
        cout<<ans2[i]<<" ";
    }
    cout<<endl;
    

}