#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int power(int x, int n, int res = 1)
{
    if (n == 0)
    {
        return res;
    }
    if (n & 1)
    {
        power(x * x, n >> 1, res * x);
    }
    else
    {
        power(x * x, n >> 1, res);
    }
}

int count(int n)
{
    if (n == 0)
    {
        return 0;
    }
    cout << n << endl;
    count(n - 1);
    // cout<<count(n-1)<<endl;
}

int bin_search(int *arr, int n, int element, int s = 0)
{
    int mid = s + ((n - s) / 2);
    if (arr[mid] == element)
    {
        return mid;
    }
    if (s > n)
    {
        return -1;
    }
    else if (arr[mid] > element)
    {
        bin_search(arr, mid - 1, element, s);
    }
    else
    {
        bin_search(arr, n, element, mid + 1);
    }
};

void reverse(int *arr, int j, int i = 0)
{
    if (i > j)
    {
        return;
    }
    swap(arr[i], arr[j]);
    reverse(arr, j - 1, i + 1);
}
void reverse(string &s, int j, int i = 0)
{
    if (i > j)
    {
        return;
    }
    swap(s[i], s[j]);
    reverse(s, j - 1, i + 1);
}
void checkpalin(string &s, int j, int i = 0)
{
    if (i > j)
    {
        cout<<"it is palindrome"<<endl;
        return;
    }
    if(s[i]!=s[j]){
        // checkpalin(s, j - 1, i + 1);
        // checkpalin(s, j - 1, i + 1);
        // checkpalin(s, j - 1, i + 1);
        cout<<"not a palindrome"<<endl;
        return;
    }
    else{
        checkpalin(s, j - 1, i + 1);

    }
}

bool ifsorted(int *arr, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (*arr < *(arr + 1))
    {
        ifsorted(arr + 1, n - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    //     cout << fact(5);
    //     cout << endl;
    //     cout << power(2, 10) << endl;
    //     cout << endl;
    //     count(10);

    cout << endl;
    int arr[7] = {1, 2, 4, 6, 7, 9, 11};
    // cout << bin_search(arr, 7, 44)<<endl;
    int arr2[7] = {11, 4, 35, 61, 7, 9, 1};
    cout << ifsorted(arr, 7) << endl;

    // https://www.codingninjas.com/studio/problems/search-in-a-row-wise-and-column-wise-sorted-matrix_839811

    // for(int i=0;i<7;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // reverse(arr,6,0);
    // for(int i=0;i<7;i++){
    //     cout<<arr[i]<<" ";
    // };

    string s = "abhijeet";
    reverse(s, s.size() - 1);
    cout << s<<endl;
    s = "mayanmar";
    checkpalin(s,s.size()-1);
}