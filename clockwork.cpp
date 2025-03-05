#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }   
        bool isfalse = 0;
        int mintime = INT_MAX,minindex = 0;
        for(int i=0;i<n;i++){

            if((arr[i] - (2*( i)))<=0||(arr[i]-(2*(n-i-1)))<=0){
                isfalse = 1;break;
            }
        }
        if(isfalse){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}