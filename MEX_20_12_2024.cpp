#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    string ans = "";
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        vector<int>arr(n);
        int pos  =-1;
        int zerocnt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                zerocnt++;
            }
        }
        int frontzerocnt = 0;
        int frontzeroIndex = -1;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                frontzerocnt++;
            }else{

                frontzeroIndex= i-1;
                break;
            }
        }
        int lastZeroCnt =0;
        int lastZeroIndex = -1;
        for(int i=n-1;i>=0;i--){
            if(arr[i]==0){
                lastZeroCnt++;
            }else{
                lastZeroIndex = i+1;
                break;
            }
        }
        if(zerocnt==n){
            ans+="0";
        }
        else if(zerocnt==(frontzerocnt+lastZeroCnt)){
            ans+='1';
        }else{
            ans+='2';
        }
    }
    for(int i=0;i<ans.length();i++){
        cout<<ans[i]<<endl;
    }
}