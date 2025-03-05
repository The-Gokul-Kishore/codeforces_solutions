#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        string gobs;
        cin>>gobs;
        long long dash_cnt = 0 , underscore_cnt =0;
        for(int i=0;i<n;i++){
            if(gobs[i]=='_'){
                underscore_cnt++;
            }
            else if(gobs[i]=='-'){
                dash_cnt++;
            }
        }
        long long score = (dash_cnt/2)*((dash_cnt+1)/2)*underscore_cnt;
        cout<<score<<endl;
    }
}
