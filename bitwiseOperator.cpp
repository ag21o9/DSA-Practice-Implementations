#include <iostream>
using namespace std;

int main()
{
    // cout<<(17>>1)<<endl;
    // cout<<(17>>2)<<endl;
    // cout<<(19<<2)<<endl;
    // cout<<(21<<2)<<endl;
    // int i = 1;
    int n = 20;
    cout << 0 << " " << 1 << " ";
    for (int f = 0, s = 1, i = 0; i < (n-2); i++)
    {
        cout << f + s << " ";
        int t = f;
        f = s;
        s = s + t;
    }
    cout<<"\n";

    // cout<<++i;
    cout<<(2*3)/(4+5);
    // int ik = 3;

} 