#include<bits/stdc++.h>
using namespace std;
long long average(long long& sum , long long& cnt){
    return (sum)/(cnt);
}
int main(){
    long long test ;
    cin>>test;
    for(long long t=0;t<test;t++){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        long long oddsum =0 ,evensum =0;
        long long evencnt =0;
        for(long long i=0;i<n;i++){
            cin>>arr[i]; 
            if(i%2==0){
                evensum+=arr[i];
                evencnt++;
            }else{
                oddsum+=arr[i];
            }
        }
        long long oddcnt = n- evencnt;
        long long oddavg = (average(oddsum,oddcnt)),evenavg = (average(evensum,evencnt));
        if(oddsum%oddcnt!=0||0!=evensum%evencnt){
            cout<<"NO"<<endl;
        }
        else if(oddavg==evenavg){
            cout<<"YES"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}