#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        unordered_map<int,int>mpa,mpb;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mpa[a[i]]++;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            mpb[b[i]]++;
        }
        int asiz = mpa.size();
        int bsiz = mpb.size();

        if(asiz>=3||bsiz>=3){
            cout<<"YES"<<endl;
        }
        else if(asiz>=2&&bsiz>=2){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }
}
