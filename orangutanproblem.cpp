#include<bits/stdc++.h>
using namespace std;
int main(){
    int test =0;
    cin>>test;
    for(int t =0;t<test;t++){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxele = *max_element(arr.begin(),arr.end());
        int minele = *min_element(arr.begin(),arr.end());
        int ans = (n-1)*(maxele-minele);
        cout<<ans<<endl;
    }
}