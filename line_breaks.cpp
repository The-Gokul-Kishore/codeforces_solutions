#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t =0;t<test;t++){
        int n,m;
        cin>>n>>m;
        vector<string>words(n);
        int len= 0;
        for(int i=0;i<n;i++){
            cin>>words[i];
            
        }
        int i =0;
        for( i=0;i<n;i++){
            if(len+words[i].length()>m){
                break;
            }
            len+= words[i].length();
        }
        cout<<i<<endl;
    }
}