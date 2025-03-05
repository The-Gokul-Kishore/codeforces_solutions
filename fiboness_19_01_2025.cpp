#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++)
    {    int a1,a2,a3,a4,a5;
        cin>>a1>>a2>>a4>>a5;
        int a3a = a1+a2;
        int a3b = a4-a2;
        int cnt = 1;
        if(a2+a3a==a4){
            cnt++;
        }
        if(a3a+a4==a5){
            cnt++;
        }
        int bcnt = 1;
        if(a1+a2==a3b){
            bcnt++;
        }
        if(a3b+a4==a5){
            bcnt++;
        }
        cout<<max(cnt,bcnt)<<endl;
    }
}