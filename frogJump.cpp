#include <iostream>
using namespace std;

int minimumJumps(int x, int y)
{
    // cout<<"here";
    int k = 1;
    if ((x == 1 && y <= 1) || (y == 1 && x <= 1))
    {
        k = 1;
    }
    else
    {

        for (int i = 2; i < max(x, y); i++)
        {
            if (x % i == 0 && y % i == 0)
            {
                k = i;
                break;
            }
        }
    }

    int x1 = 0, y1 = 0;
    int count = 0;
    cout<<k<<endl;
    while (x1 != x || y1 != y)
    {
        if (x1 != x)
        {

            x1 += k;
            // cout<<x1<<endl;
            count++;
        }
        if (y1 != y)
        {
            y1 += k;
            // cout<<y1<<endl;
            count++;
        }
    }
    return count;
}

int main()
{
    cout << minimumJumps(12, 10);
}