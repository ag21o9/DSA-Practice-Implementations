#include<iostream>
using namespace std;

string reArrangeString(string &s)
{
	int curthreat = 0;
    int gcc=0;
	for(int i=0;i<s.size();i++){
		if(s[i]==s[i+1]){
            gcc = 1;
			curthreat = i+1;
			for(int j=i+1;j<s.size();j++){
				if(s[curthreat]!=s[j]){
					swap(s[curthreat],s[j]);
				break;
				}
			}
		}
	}
    cout<<s<<endl;
	return s;
}


int main(){
    string k = "bbbbbb";
    cout<<reArrangeString(k);

}