#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>memotable,grid;
int m,n;
pair<int,int> source,desti,rule;
int recur(int i ,int j,int cnt,vector<vector<int>>ans){
    cout<<"I:"<<i<<"J:"<<j<<endl;
    ans.push_back({i,j});
    if(i==desti.first&&j==desti.second){
        if(memotable[i][j]!=-1&&memotable[i][j]!=-12)
        memotable[i][j] = min(memotable[i][j],cnt);
        else
        memotable[i][j] = cnt;
        cout<<memotable[i][j]<<"cnt:"<<cnt<<endl;
           cout<<"{";
            for(auto k : ans){
                    cout<<"{"<<k[0]<<":"<<k[1]<<"},";
            }
            cout<<"}";

        return memotable[i][j];
    }
    if(i<0||j<0||i>=m||j>=n||(grid[i][j]==1&&(i!=source.first&&j!=source.second)))return INT_MAX;
    cnt++;
    if(memotable[i][j]!=-1&&memotable[i][j]!=-12){
        return memotable[i][j];
    }
    if(memotable[i][j]==-12){
        return INT_MAX;
    }
    memotable[i][j] = -12;
    int forwardx  = i+rule.first , forwardy =j+rule.second;
    int backwardx = i-rule.first,backwardy = j-rule.second;
    int rightx = i+rule.second , righty  = j-rule.first;
    int leftx = i-rule.second,lefty  = j+rule.first;
    memotable[i][j] = min({recur(forwardx,forwardy,cnt,ans),recur(backwardx,backwardy,cnt,ans),recur(rightx,righty,cnt,ans),recur(leftx,lefty,cnt,ans)});
    
    return memotable[i][j];
}
int main(){
    cin>>m>>n;
    memotable.resize(m,vector<int>(n,-1));
    
    grid.resize(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    cin>>source.first>>source.second;
    cin>>desti.first>>desti.second;
    cin>>rule.first>>rule.second;
    pair<int,int>ans{};
    cout<<recur(source.first,source.second,0,{})<<endl;
    return 0;
}