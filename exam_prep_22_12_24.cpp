#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>arr(n);
        unordered_set<int>known;
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        for(int i=0;i<k;i++){
            int a;
            cin>>a;
            known.insert(a);
        }
        if(n-k>1){
            for(int i=0;i<m;i++){
                cout<<"0";
            }
            cout<<endl;
            continue;
        }else if(n-k==0){
            for(int i=0;i<m;i++){
                cout<<"1";
            }
            cout<<endl;
            continue;
        }
        string ans ="";
        for(int i=0;i<m;i++){
            if(known.find(arr[i])!=known.end()){
                ans+="0";
            }else{
                ans+='1';
            }
        }
       cout<<ans<<endl;
    }
}