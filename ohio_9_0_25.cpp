#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        string s;
        cin >> s;
        int n = s.length();
        bool found = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && s[i] == s[i - 1])
            {
                found = 1;
            }
        }
        if (found)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
}
