#include <iostream>
#include <vector>
using namespace std;
void printspell(int n, string *values)
{
    if (n == 0)
    {
        return ;
    }
    printspell(n / 10, values);
    cout << values[n % 10] << " ";
}

int exponent(int k, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return k * exponent(k, n - 1);
}

void subsets(int index, int size, int *arr, vector<int> out, vector<vector<int>> &ans)
{
    if (index >= size)
    {
        ans.push_back(out);
        return;
    }
    subsets(index + 1, size, arr, out, ans);
    out.push_back(arr[index]);
    subsets(index + 1, size, arr, out, ans);
}

int nthstair(const int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }

    return nthstair(n - 1) + nthstair(n - 2) + nthstair(n - 3);
}

void getsubstrings(int index, string str)
{
    if (index >= str.length())
    {
        cout << str << endl;
        return;
    }

    for (int i = index; i < str.length(); i++)
    {
        swap(str[index], str[i]);
        getsubstrings(index + 1, str);
        swap(str[index], str[i]);
    }
}

int main()
{

    string values[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

    printspell(1476, values);
    cout << endl;

    cout << exponent(4, 9);
    int arr[3] = {1, 2, 3};

    vector<int> out;
    vector<vector<int>> ans;
    subsets(0, 3, arr, out, ans);

    cout << endl;
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {

            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << nthstair(6);

    cout << endl;
    // flyods hare and heyat algorithm
    string a = "abc";
    getsubstrings(0, a);
}