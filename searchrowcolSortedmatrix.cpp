#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int search(vector<vector<int>> matrix, int x)
{
    int row = matrix.size();
    cout<<row<<endl;
    int columns = matrix[0].size();
    cout<<columns;
    int i = 0;
    int j = columns - 1;

    pair<int, int> p;
    p.first = -1;
    p.second = -1;
    while (i <= row && j >= 0)
    {
        // int element = ;
        if (matrix[i][j] == x)
        {
            return 1;
        }
        if (matrix[i][j] > x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}

int main()
{

    vector<vector<int>> vec1;
    vec1[0][0] = 1;
    vec1[0][1] = 2;
    vec1[0][2] = 5;
    vec1[1][0] = 3;
    vec1[1][1] = 4;
    vec1[1][2] = 9;
    vec1[2][0] = 6;
    vec1[2][1] = 7;
    vec1[2][2] = 10;

    // pair<int, int> p2;
    cout<<search(vec1, 4);
    // cout << p2.first << " " << p2.second;
}