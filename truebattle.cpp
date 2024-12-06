#include<bits/stdc++.h>
using namespace std;
int main(){
    int test ;
    cin>>test;
    for(int t =0;t<test;t++){
        int n ;
        cin>>n;
        int onecnt =0,zerocnt= 0; 
        int ones = 0,zeros =0;
        string arr;
        cin>>arr;
        int maxones = 0, maxzeros = 0;
        
        for(int i=0;i<n;i++){
            if(arr[i]=='1'){
                onecnt++;
                ones++;
                maxzeros = max(zerocnt,maxzeros);
                zerocnt=0;
            }else if(arr[i]=='0'){
                zerocnt++;
                zeros++;
                maxones = max(maxones,onecnt);
                onecnt =0;
            }
        }
        if(ones>=zeros&&maxones>=maxzeros){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
}