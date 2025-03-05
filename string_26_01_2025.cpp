#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        string s;
        cin>>s;
        int cnt= 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}