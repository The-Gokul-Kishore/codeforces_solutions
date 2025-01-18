#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n;
        cin >> n;
        unordered_map<int, int> freq;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int uniqueends = 0;
        int startindex = 0;
        for (int i = 0; i < n; i++)
        {
            if (freq[arr[i]] == 1)
            {
                startindex++;
                uniqueends++;
            }
            else
            {
                break;
            }
        }
        if (startindex == n)
        {
            cout<< 0<<endl;;
            continue;
        }
        int endindex = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (freq[arr[i]] == 1)
            {
                endindex--;
                uniqueends++;
            }
            else
            {
                break;
            }
        }
        cout << freq.size() - uniqueends << endl;
    }
}
