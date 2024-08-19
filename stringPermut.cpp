#include <iostream>
using namespace std;

bool checkEqual(int *arr, int *arr2, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr2[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    string s = "ab";
    string permut = "ab";

    int alpha[26] = {0};
    int win = permut.size();
    for (int i = 0; i < win; i++)
    {
        int k = permut[i] - 'a';
        alpha[k]++;
    }

    // --------------------------------------------------------------------------------------

    int alpha1[26] = {0};
    int i = 0;
    while (i < win && i < s.size())
    {
        int k = s[i] - 'a';
        alpha1[k]++;
        i++;
    }
    if (checkEqual(alpha, alpha1, 26))
    {
        cout << true;
    }

    while (i < s.size())
    {
        int current = s[i] - 'a';
        alpha1[current]++;
        int old = s[i - win] - 'a';

        alpha1[old]--;

        if (checkEqual(alpha1, alpha, 26))
        {
            cout << true;
            break;
        }
        i++;
    }
}