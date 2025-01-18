#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        int a[n];
        
        a[0] =1;
        a[1] = 1;
        for(int i=2;i<n;i++){
            a[i]  = i+1;
        }
        a[n-2] = 1;
        a[n-1] = 3;
        if(n==6){
            a[3] = 2;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}