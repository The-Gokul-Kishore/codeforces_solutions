#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t =0;t<test;t++){
        int  n ;
        cin>>n;
        string oness;
        for(int i=0;i<n-1;i++){
            oness+="0";
        }
        oness+="1";
        cout<<oness<<endl;
    }
    return 0;
}