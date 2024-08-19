#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout<<"Enter Amount "<<endl;
    cin >> amount;
    int n=100;

    switch (n)
    {
    case 100:
        cout << "Total Notes required of 100 are " << amount / 100<<endl;
        amount = amount - ((amount / 100)*100);
        // cout<<amount<<endl;
    case 50:
    // cout<<amount<<endl;
        cout << "Total Notes required of 50 are " << amount / 50<<endl;
        amount = amount - ((amount / 50)*50);
    case 20:
        cout << "Total Notes required of 20 are " << amount / 20<<endl;
        amount = amount - ((amount / 20)*20);
    case 1:
        cout << "Total Notes required of 1 are " << amount / 1<<endl;
        amount = amount - ((amount / 1)*1);
        break;
    default:
        cout << "no such cases possible";
        break;
    }
}