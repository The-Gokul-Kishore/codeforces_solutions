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
        vector<int> arr(n) ;
        int maxi = 0;
        int maxvalleftmost = 0;
        int maxvalrightmost = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > maxi)
            {
                maxvalrightmost = i,
                maxvalleftmost = i;
                maxi = arr[i];
            }
            else if (arr[i] == maxi)
            {
                maxvalrightmost = i;
            }
        }
        if(n==2){
            cout<<abs(arr[1]-arr[0])<<endl;
        }
        else if (n<1 ||n > 3 || maxvalleftmost != 1 || maxvalrightmost != 1)
        {
            cout << maxi << endl;
        }
        else
        {
            cout << arr[1] - arr[2] - arr[0] << endl;
            ;
        }
    }
}
