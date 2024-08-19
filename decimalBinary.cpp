#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    float ans = 0;
    int i = 0;
    while(n!=0){
        // int digit = n%10;
        int bit = (n&1);
        ans = (float)(bit*(pow(10,i))) + (float)ans;
        n = n>>1;
        // cout<<n<<endl;
        i++;
    }
    cout<<ans<<endl;

    cout<<(4&6)<<endl;;
    cout<<(4|6)<<endl;
    cout<<(~8)<<endl;
    cout<<(4^6)<<endl;
    cout<<(4>>1)<<endl;
    cout<<(10|6)<<endl;
    cout<<(10^3)<<endl;


    n = 100000;
    ans = 0;
    i = 0;
    while (n!=0)
    {
        int bit  = n%10;
        if (bit==1){
            ans += pow(2,i);
        }
        n = n/10;
        i++;
    }
    cout<<"Decimal Number is "<<ans<<endl;
    

}