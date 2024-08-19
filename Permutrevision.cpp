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
    string str = "abhijeet";
    string check = "aj";
    int win = check.size();

    int r1[26] = {0};
    int r2[26] = {0};

    for (int i = 0; i < win; i++)
    {
        int val = check[i] - 'a';
        r1[val]++;
    }

    int i = 0;

    for (; i < win; i++)
    {
        int val = str[i]-'a';
        r2[val]++;
    }
    if (checkEqual(r1, r2, 26))
    {
        cout << "present" << endl;
        return 0;
    }

    for (; i < str.size(); i++)
    {
        int curr = str[i]-'a';
        int old = str[i - win]- 'a';

        r2[curr]++;
        r2[old]--;

        if (checkEqual(r1, r2, 26))
        {
            cout << "present" << endl;
            break;
        }
    }
}