#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>normal,rever;
        int norsum = 0,revsum = 0;
        for(int i=1;i<n;i++){

            normal.push_back(arr[i]-arr[i-1]);
            }
        for(int i=n-1;i>0;i--){
            rever.push_back(arr[i-1]-arr[i]);
        }
        int ans=accumulate(arr.begin(),arr.end(),0);
        revsum = accumulate(rever.begin(),rever.end(),0);
        norsum = accumulate(normal.begin(),normal.end(),0);
        cout<<max(ans,max(norsum,revsum))<<endl;
    }
}