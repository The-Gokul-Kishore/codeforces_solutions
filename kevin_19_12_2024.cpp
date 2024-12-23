#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        string s;
        cin>>n;
        s=  to_string(n);
        if(n%33==0){
            cout<<"Yes"<<endl;
            continue;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
}