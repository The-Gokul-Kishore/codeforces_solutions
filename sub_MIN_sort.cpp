#include<bits/stdc++.h>
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

        bool change =1;
        bool good = 0;
        while((!good)&&change){
            change = 0;
            good= 1;
            for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                good =0;
            }
            int mini = min(arr[i],arr[i+1]);
            if(mini!=0){
                change = 1;
            }
            arr[i] -=mini;
            arr[i+1]-=mini;
            
            }
        }

        
        if((good)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}