#include<bits/stdc++.h>
using namespace std;
int main(){
    int test= 0;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,k;
        cin>>n>>k;
        int time = n*k - (n-1);
        cout<<time<<endl;
    }
}