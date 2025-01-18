#include<bits\stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }
        int mini=INT_MAX,maxi = 0;
        int turn = 0;
        int maxlen = 0;
        int len1 =0,start = 0;
        for(int i=0;i<n;i++){
            if(arr[i]<mini){
                mini= arr[i];
            }
            if(arr[i]>maxi){
                maxi=arr[i];
            }
            if(maxi>=mini*2){
                start = i;
                mini = arr[i];
                maxi = arr[i];
            }
            maxlen = max(maxlen,i-start+1);

        }
        if(maxlen>1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}