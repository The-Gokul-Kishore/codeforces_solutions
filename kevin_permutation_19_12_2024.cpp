#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        int start = 1,end = n;
        int cnt = 0;
        for(int i=0;i<n;i++){
            arr[i] = end--;
            cnt++;
            if(cnt==k-1&&i!=n-1){
                arr[++i] = start++;
                cnt =0;
            
            }
            
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}