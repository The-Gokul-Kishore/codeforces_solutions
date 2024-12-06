#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int test =0;test<T;test++){
        int a,b;
        cin>>a>>b;
        int mid = (a+b)/2;
        cout<<(mid-a)+(b-mid)<<endl;
    }
}