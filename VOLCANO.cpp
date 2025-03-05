#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int test;
    cin >> test;
    for (int t = 0; t < test; t++) {
        float n, p;
        cin >> n >> p;
        vector < int > arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int vollevel = 0;
        bool volreached = 0;
        int timme = 0;
        int maxi = 0;
        vector < int > ans(n,INT_MAX);
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0)
            {
                ans[i] = 0;
                volreached = 1;
                maxi = INT_MIN;
                timme = 0;

            }
            else if (volreached) {
                maxi = max(maxi,int(ceil(float(arr[i]+1)/p)));

                ans[i] = min(ans[i], maxi);


            }

        }
        volreached = 0;
        maxi = 0;
        for (int i = n - 1; i >= 0; i--){
            if (arr[i] == 0) {
                volreached = 1;
                maxi = 0;
            }
            else if (volreached) {
                maxi = max(maxi,int(ceil(float(arr[i]+1)/p)));
                ans[i] = min(ans[i], maxi);
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
