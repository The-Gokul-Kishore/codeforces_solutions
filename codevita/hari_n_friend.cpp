#include<bits/stdc++.h>
using namespace std;
vector<vector<pair<long long,long long>>>dp;
vector<vector<bool>>visited;
pair<int,int>dest ,src;
int n ,m;
pair<long long,long long>dfs(long long i,long long j,vector<vector<long long>>&sharks,vector<vector<long long>>times,long long strength,long long time,long long& min_time){
    if(i<0||i>=n||j<0||j>=m||strength<0||time>min_time){
        return {INT_MAX,INT_MIN};
    }
    if(dp[i][j].first!=-1&&dp[i][j].first!=INT_MAX){
        return dp[i][j];
    }
    if(visited[i][j]) {
         return {INT_MAX,INT_MIN};
    }
    visited[i][j] = true ;
    
    cout<<"I"<<i<<" J"<<j<<endl;
    cout<<strength<< " "<<time<<endl;
    strength-= (sharks[i][j]);
    time+=times[i][j];
    
    if(strength<0||min_time<time){
        return{INT_MAX,INT_MIN};
    }
    if(i==dest.first&&j==dest.second){
        min_time = min(time,min_time);
        visited[i][j] = false;       
        return {0,0};
    }
    vector<vector<int>> iter = {{0,1},{1,0},{-1,0},{0,-1}};
    pair<long long,long long> best = {INT_MAX,INT_MIN};
    strength--;
    for(auto it: iter){
        long long new_i = i+it[0],new_j = j+it[1];
        if(new_i<0||new_i>=n||new_j<0||new_j>=m){
            continue ;
        }
        pair<long long,long long>ans = dfs(new_i,new_j,sharks,times,strength,time,min_time);
        if(ans.first<best.first){
            best = ans ;
        }else if(ans.first==best.first){
            best.second = min(best.second,ans.second);
        }
    }
    visited[i][j] = false;
    cout<<"I"<<i<<" J"<<j<<endl;
    cout<<"BEST "<<best.first<<" "<<best.second<<endl;
    return dp[i][j]= {times[i][j]+best.first,sharks[i][j]+1+best.second} ;
}
int main(){
        cin>>n>>m;
        dp.resize(n,vector<pair<long long,long long>>(m,{-1,-1}));
        visited.resize(n,vector<bool>(m));
        pair<long long,long long>src ;
        vector<vector<long long>>stren(n,vector<long long>(m)),times(n,vector<long long>(m));
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                string s;
                cin>>s;
                if(s[0]=='S'||s[0]=='D'){
                    if(s[0]=='S'){
                        stren[i][j] = 0;
                        src = {i,j};

                    }else{
                        
                        stren[i][j] = 0;
                        dest = {i,j};
                    }
                }else{

                stren[i][j] = stoi(s);
                
                }
            }

        }
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                cin>>times[i][j];
            }
        }
        long long strength;
        cin>>strength;
        long long time = INT_MAX ;
        auto ans = dfs(src.first,src.second,stren,times,strength,0,time);
        if(ans.first<0||ans.second<0){
            cout<<"Not Possible";
        }else{
        cout<<ans.first<<" "<<ans.second;
        }
}