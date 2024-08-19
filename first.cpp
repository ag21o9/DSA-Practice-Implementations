#include <iostream>
using namespace std;


int main()
{
    int r = 4;
    int c = 4;
    for (int i = 0; i < r; i++)
    {
        for (int i = 0; i < c; i++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout << endl;

    r = 5;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " * ";
        }
        cout << endl;

        /* code */
    }
    r = 4;
    cout << endl;
    for (int i = r; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " * ";
        }
        cout << endl;

        /* code */
    }

    cout << endl;

    r = 4;
    c = 4;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j < i)
            {
                cout << "   ";
                /* code */
            }
            else
            {
                cout << " * ";
            }
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < (i - 1); j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << " * ";
        }
        cout << endl;

        /* code */
    }
    cout << endl;

    int row = 0;
    int n = 6;
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

    cout << endl;
    n = 5;
    row = 1;
    while (row < n)
    {
        int i = 1;
        int val = row;
        while (i <= row)
        {
            cout << val;
            val++;
            i++;
            /* code */
        }
        row++;
        cout << endl;
    }

    cout << endl;
    /*
    1
    23
    345
    4567
    56789
    678101112

    */
    row = 1;
    n = 5;
    while (row < n)
    {
        for (int i = row; i < (2 * row); i++)
        {
            cout << i;
            /* code */
        }
        cout << endl;
        row++;

        /* code */
    }

    cout << endl;

    row = 1;
    n = 5;
    while (row < n)
    {
        for (int i = row; i > 0;)
        {
            cout << i;
            i--;
        }
        cout << endl;
        row++;
    }

    row = 0;
    n = 5;
    char a = 'A';
    while (row < n)
    {
        int i = 0;
        while (i < n)
        {
            cout << a;
            a++;
            i++;
        }
        cout << endl;
        row++;
    };

    row = 0;
    // char a = 'A';
    n = 5;
    while (row < n)
    {
        char a = (row) + 'A';
        for (char i = a; i < n + a;)
        {
            cout << i;
            i++;
        }
        cout << endl;
        a++;
        row++;

        // cout<<endl;
    }

    row = 0;
    n = 5;
    while (row <= n)
    {
        char a = 'A' + (row - 1);
        for (int i = 0; i < row; i++)
        {
            cout << a;
        }
        cout << endl;
        row++;
    }

    row = 0;
    a = 'A';
    while (row <= n)
    {
        for (int i = 0; i < row;)
        {
            cout << a;
            i++;
            a++;
        }
        cout << endl;
        row++;
    }

    row = 0;
    a = 'A';
    while (row <= n)
    {
        a = (row - 1) + 'A';
        for (int i = 0; i < row;)
        {
            cout << a;
            a++;
            i++;
        }
        cout << endl;
        row++;
    }
    cout << endl;

    row = 0;
    a = 'A' + (n - 1);
    while (row < n)
    {
        char v = a;
        for (int i = 0; i < row; i++)
        {
            cout << v;
            v++;
        }
        a--;
        row++;
        cout << endl;
    }

    row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space > 0)
        {
            cout << "   ";
            space--;
        }
        int i = 1;
        while (i <= row)
        {
            cout << " * ";
            i++;
            /* code */
        }
        cout << endl;
        row++;
    }
    cout << endl;
    row = 0;
    while (row <= n)
    {
        int space = n - row;
        while (space > 0)
        {
            cout << " * ";
            space--;
        }
        int i = 1;
        while (i <= row)
        {
            cout << "   ";
            i++;
            /* code */
        }
        cout << endl;
        row++;
    };

    row = 0;
    int val = 1;
    while (row <= n)
    {
        for (int i = 0; i < (row); i++)
        {
            cout << " ";
            /* code */
        }
        int k = 1;
        while (k < (n - row))
        {
            cout << val;
            /* code */
            k++;
        }
        val++;
        row++;
        cout << endl;
    };

    row = 1;
    val = 1;
    while (row < n)
    {
        for (int i = 0; i < (n - row); i++)
        {
            cout << " ";
            /* code */
        }

        for (int i = 0; i < row; i++)
        {
            cout << val;
        }
        val++;
        row++;
        cout << endl;
    }

    row = 1;
    while (row <= n)
    {
        for (int i = 0; i < (n - row); i++)
        {
            cout << " ";
        }
        int k = 1;
        for (int i = 0; i < row; i++)
        {
            cout << k;
            k++;
        }
        int j = 1;
        for (int i = 0; i < (row - 1); i++)
        {
            cout << j;
            j++;
        }

        row++;
        cout << endl;
    }
    cout << endl;
    row = 1;
    while (row <= n)
    {
        int k = 1;
        for (int i = 0; i < (n - row + 1); i++)
        {
            cout << k;
            k++;
            /* code */
        }
        for (int i = 0; i < (row - 1); i++)
        {
            cout << "*";
        }
        for (int i = 0; i < (row - 1); i++)
        {
            cout << "*";
        }
        k--;
        for (int i = 0; i < (n - row + 1); i++)
        {
            cout << k;
            k--;
            /* code */
        }
        row++;
        cout << endl;
    }
}

/*

 *  *  *  *
 *  *  *  *
 *  *  *  *
 *  *  *  *


 *
 *  *
 *  *  *
 *  *  *  *

 *  *  *  *
 *  *  *
 *  *
 *

 *  *  *  *
    *  *  *
       *  *
          *


 *
   *  *
     *  *  *


1
23
456
78910
1112131415
161718192021

1
23
345
4567

1
23
345
4567

1
21
321
4321

ABCDE
FGHIJ
KLMNO
PQRST
UVWXY

ABCDE
BCDEF
CDEFG
DEFGH
EFGHI

A
BB
CCC
DDDD
EEEEE

A
BC
DEF
GHIJ
KLMNO

A
BC
CDE
DEFG
EFGHI


D
CD
BCD
ABCD

             *
          *  *
       *  *  *
    *  *  *  *
 *  *  *  *  *

 *  *  *  *  *
 *  *  *  *
 *  *  *
 *  *
 *

1111
 222
  33
   4


    1
   22
  333
 4444
    1
   121
  12312
 1234123
123451234

1234554321
1234**4321
123****321
12******21
1********1
*/