#include<bits/stdc++.h>
using namespace std;
bool IsChangable(int twocnt,int threecnt, long long sum,map<pair<long long,pair<int,int>>,bool>&dp){
   if(dp.find({sum,{twocnt,threecnt}})!=dp.end())return dp[{sum,{twocnt,threecnt}}];
   if(sum%9==0)return dp[{sum,{twocnt,threecnt}}]= true;
   if(twocnt==0&&threecnt==0)return dp[{sum,{twocnt,threecnt}}]= 0;
   bool dones = 0;
   if(threecnt){
        dones |=IsChangable(twocnt,threecnt-1,sum+6,dp);
   }
   if((!dones)&&twocnt){
    dones |=IsChangable(twocnt-1,threecnt,sum+2,dp);
   }
   return dp[{sum,{twocnt,threecnt}}]= dones;
   
}
int main(){
    int test ;
    cin>>test;
    for(int t=0;t<test;t++){
        string num;
        cin>>num;
        int n = num.size();
        int twocnt = 0 , threecnt =0;
        long long sum =0 ;
        for(int i=0;i<n;i++){
            sum+= num[i]-'0';
            if(num[i]=='2'){
                twocnt++;
            }else if(num[i]=='3'){
                threecnt++;
            }
        }
        if(sum%9==0){
            cout<<"Yes"<<endl;
            continue;
        }
        map<pair<long long,pair<int,int>>,bool>dp;
        if(IsChangable(twocnt,threecnt,sum,dp)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}