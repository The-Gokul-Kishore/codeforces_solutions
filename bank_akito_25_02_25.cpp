#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        int j =0;
        int totalor = 0;
        int i =-1;
        while(++i<=x&&j<n){
            if((i|x)!=x)continue;
            a[j++] = i;
            totalor|=i;
        }
        if(totalor!=x){
            a[j-1] =x;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
