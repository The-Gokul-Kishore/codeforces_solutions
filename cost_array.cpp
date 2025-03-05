#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        int mod =n/ k;
        int cnt = 1;
        int start =0 ;
        int mini =0 ;
        int cost = 0;
        int extra = n-k;
        if(extra==0){
            for(int i=1;i<n;i+=2){
                if(arr[i]!=cnt){
                    cost = cnt;
                    break;

                }
                cnt++;
            }
            if(cost==0){
                cost = cnt;
            }
        }else {
            cost = 2;
        for(int i=n-1;i>=0;i--){
            if(i!=0&&n-1-i>=k-2){if(arr[i]!=1){
                cost = 1;
                break;
            }}
        }

            }
        cout<<cost<<endl;
    }
}
