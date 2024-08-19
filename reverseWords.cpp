#include<iostream>
// #include<string>
using namespace std;

int main(){
    string str = "The moon shines brightly at night";
    int s = 0;
    int e = str.length()-1;
    while(s<=e){
        swap(str[s++],str[e--]);
    }
    // cout<<str;
    int i = 0;
    for(int j=0;j<str.length();j++){
        if((str[j]==' ' || str[j]=='\0')){
            s = i;
            e = j-1;
            while(s<=e){
                swap(str[s++],str[e--]);
            }
            i = j+1;
        }
    }
    cout<<str;
}