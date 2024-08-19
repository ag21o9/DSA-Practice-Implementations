#include <iostream>
using namespace std;

int countone(int a, int b)
{
    int count = 0;
    while (a != 0)
    {
        if (a & 1 == 1)
        {
            count += 1;
        }
        a = a >> 1;
    };
    while (b != 0)
    {
        if (b & 1 == 1)
        {
            count += 1;
        }
        b = b >> 1;
    };
    return count;
}

int main()
{
    cout << countone(3, 7);
}