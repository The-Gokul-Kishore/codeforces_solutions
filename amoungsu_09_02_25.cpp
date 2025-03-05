#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        string ans;
        cin>>ans;
        cout<<ans.substr(0,ans.length()-2)+"i"<<endl;
    }
}
