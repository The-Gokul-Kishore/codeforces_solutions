#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,m;
        cin>>n>>m;
        vector<int>sortedarr;
        unordered_map<int,int>memberof;
        bool notpossible = 0;
        vector<vector<int>>arr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                memberof[arr[i][j]] =i;
                sortedarr.push_back(arr[i][j]);
                
            }
            for(int j=0;j<m;j++){
                for(int k=j+1;k<m;k++){
                    if(abs(arr[i][j]-arr[i][k])==1){
                        notpossible = 1;
                    }
                }
            }
        }
        

        sort(sortedarr.begin(),sortedarr.end());
        vector<int>cnt(n);
        int j=-1;
        bool impossible = 0;
        vector<int>order;
        for(int i=0;i<sortedarr.size()-1;i++){
            if(memberof[i]==memberof[i+1]){
                impossible= 1;
            }
        }
        if(impossible){
            cout<<-1<<endl;
            continue;;
        }

            unordered_map<int,int>lastseen;
            order  = {};
            for(int i=0;i<n;i++){
                cout<<memberof[i]+1<<" ";
            }
            cout<<endl;
    
        

    }
}