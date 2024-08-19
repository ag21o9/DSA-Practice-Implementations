#include <iostream>
using namespace std;

int main()
{
    string s = "aabcceedgeeeeeedd";
    string s2 = "";
    // output = 'a3b2cde2g;
    int i = 0;
    int j = 0;
    while (j <= s.size())
    {
        if (s[i] == s[j])
        {
            j++;
        }
        else{

            int count = j-i;
            s2.push_back(s[j - 1]);
            if ((count) > 1)
            {
                string stp = to_string(count);
                for (int k = 0; k <stp.size(); k++)
                {
                    s2.push_back(stp[k]);
                }
            }
            i = j;
            j++;
        }
    }
    cout << s2;
}