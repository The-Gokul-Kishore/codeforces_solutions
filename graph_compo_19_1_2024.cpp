#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long t=0;t<test;t++){
        long long n,m1,m2;
        cin>>n>>m1>>m2;
        set<pair<long long,long long>>f;
        vector<vector<long long>>farr(m1,vector<long long>(2));
        for(long long i=0;i<m1;i++){
            cin>>farr[i][0]>>farr[i][1];
            f.insert({farr[i][0],farr[i][1]});
        }
        long long present = 0, toadd =0;
        
        for(long long j=0;j<m2;j++){
            long long a ,b;
            cin>>a>>b;
            if(f.find({a,b})!=f.end()){
                present++;
            }else{
                toadd++;
            }
        }
        cout<<m1-present+toadd<<endl;
    }
}