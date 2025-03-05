#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,m;
        cin>>n>>m;
        int maxcol = -1;
        unordered_map<int,int>colorfreq;
        unordered_map<int,int>moves;
        vector<vector<int>>mat(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>mat[i][j];
                colorfreq[mat[i][j]]++;
                if(maxcol==-1||colorfreq[mat[i][j]]>colorfreq[maxcol]){
                    maxcol = mat[i][j];
                }
            }
        }
        int totalmoves =0 ;
        int dupli = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(moves.find(mat[i][j])==moves.end()){
                    moves[mat[i][j]]++;
                    totalmoves++;
                }
                if(((i<n-1&&mat[i][j]==mat[i+1][j])||(j<m-1&&mat[i][j]==mat[i][j+1]))){
                    moves[mat[i][j]]++;
                    dupli = 1;
                    if(moves[mat[i][j]]<3)totalmoves++;
                }
            }
        }
        if(dupli==0)totalmoves--;
        else totalmoves-=2;
        cout<<totalmoves<<endl;
    }
}
