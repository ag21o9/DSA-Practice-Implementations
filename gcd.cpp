#include <iostream>
using namespace std;

void gcd(int a, int b)
{
    if (a == 0)
    {
        cout << b << endl;
    }
    if (b == 0)
    {
        cout << a << endl;
    }
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    cout<<b;
};


int gcdRecursively(int a,int b){
    if(a==b){
        return a;
    }
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a>b){
        gcdRecursively(a-b,b);
    }
    else{
        gcdRecursively(b-a,a);
    }
}

int main()
{
    // gcd(28,24);
    cout<<gcdRecursively(8,0)<<endl;
    cout<<(4>>2);

}