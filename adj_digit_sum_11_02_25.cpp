#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int x,y;
        cin>>x>>y;
        if((x%9==0&&y==1)){
            cout<<"YES"<<endl;
        }else if(y-x==1){
            cout<<"YES"<<endl;
        }else{
            int sum =x;
            while(sum>=y){
                sum-=9;
                if(y-sum==1){
                    break;
                }
            }
            if(y-sum==1){
                cout<<"YES"<<endl;
            }else
            cout<<"NO"<<endl;
        }
    }
}
