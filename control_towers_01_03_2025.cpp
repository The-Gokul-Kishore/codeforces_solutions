#include<bits/stdc++.h>
using namespace std;
vector<int>rowcnt ,colcnt;
int recur(int i,int j,int cnt,vector<vector<int>>&grid){
    if(cnt==4)return 1;
    grid[i][j]=cnt;
    cnt++;
    rowcnt[i]--;
    colcnt[j]--;
    int ans=0;
    if(colcnt[j]>0){
        for(int r=0;r<grid.size();r++){
            if(grid[r][j]==0){
                ans+=recur(r,j,cnt,grid);
            }
        }
    }
    if(rowcnt[i]>0){
        for(int c=0;c<grid[0].size();c++){
            if(grid[i][c]==0){
                ans+=recur(i,c,cnt,grid);
            }
        }
    }
    rowcnt[i]++;
    colcnt[j]++;
    grid[i][j]=0;
    return ans;
}
int main(){
    int test;
        int n,m;
        cin>>n>>m;
        rowcnt.resize(n,0);
        colcnt.resize(m,0);
        vector<vector<int>>grid(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char temp;
                cin>>temp;
                if(temp=='#')grid[i][j]=-1;
                else {
                    grid[i][j]=0;
                    rowcnt[i]++;
                    colcnt[j]++;
                }
            }
        }
        int ans= 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    ans+=recur(i,j,1,grid);
                }
            }
        }
        cout<<ans<<endl;
}
