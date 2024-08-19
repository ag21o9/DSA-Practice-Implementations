#include<iostream>
using namespace std;

int main(){
    int row = 0;
    int n = 4;
    int col = 1;
    while (row <= n)
    {
        int i = 0;
        // col = 1;
        while (i < row)
        {
            cout << col;
            col++;
            i++;
        }
        cout << endl;
        row++;
    }
    cout<<(4^2);
}