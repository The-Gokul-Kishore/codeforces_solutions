#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        vector<int>b(n-2);
        bool falsei=0;
        for(int i=0;i<n-2;i++){
            cin>>b[i];
        }
        for(int i=1;i<b.size();i++){
            if(i<b.size()-1&&b[i]!=b[i-1]&&b[i-1]==b[i+1]&&b[i+1]==1){
                falsei=1;
                break;
            }
        }
        if(falsei){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
}
