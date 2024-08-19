#include <iostream>
using namespace std;

char getMaxOccur(string s)
{
    int number[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        int num;
        if (c >= 'a' && c <= 'z')
        {
            num = c - 'a';
            // cout<<num<<endl;
        }
        else
        {
            num = c - 'A';
            // cout<<num<<endl;
        }
        number[num] = number[num] + 1;
    }

    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (number[i] > maxi)
        {
            maxi = number[i];
            ans = i;
        }
    }

    char fn = ans + 'a';
    return fn;
}

int main()
{

    string s;
    cin >> s;
    cout << getMaxOccur(s);
}