#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,k,p;
        cin>>n>>k>>p;
        k = abs(k);
        if(n*p<k){
            cout<<-1<<endl;
            continue;
        }
        int ans = (k/p) +(k%p>0);
        cout<<ans<<endl;
    }
}
