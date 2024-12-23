#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int a,b,c,n;
        cin>>n>>a>>b>>c;
        int ans=0;
        int threedays = a+b+c;
        ans = (n+threedays)/threedays;
        ans*=3;
        ans-=3;
        int dist=(ans/3)*threedays;
        if(dist<n){
            dist+=a;
            ans++;
        }
        if(dist<n)
        {
            ans++;
            dist+=b;
        }
        if(dist<n){
            ans++;
            dist+=c;
        }
        cout<<ans<<endl;
    }
}