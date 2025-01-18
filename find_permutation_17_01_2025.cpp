#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        vector<vector<int>>graph(n,vector<int>(n));
        vector<int>ans(n);
        
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            int pos = 0;
            for(int j=0;j<n;j++){
                
                graph[i][j] =s[j] -'0' ;
            }

        }
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        for(int i= 0;i<n;i++){
            int pos = 0;
            for(int j=0;j<n;j++){
                if(j<i){
                    pos+= (graph[i][j]==1);
                }
                 if(j>i){
                    pos+=(graph[i][j]==0);
                }

            }


            int an =pos;
            while(ans[pos]!=0&&ans[pos]<i+1){
                if(graph[ans[pos]-1][pos]!=0){
                    pos--;
                }
                else{
                    pos++;
                }
            }
            while (ans[pos]!=0&&ans[pos]>i+1)
            {
                 if(graph[ans[pos]-1][pos]!=0){
                    pos++;
                }
                else{
                    pos--;
                }
            }
            
            ans[pos] = i+1;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}