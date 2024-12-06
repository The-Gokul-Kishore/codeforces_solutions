#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    for(int Test=0;Test<testcases;Test++){
        int n,eo;
        cin>>n>>eo;
        vector<long>arr(n);
        long maxi =0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(maxi<arr[i])maxi = arr[i];
        }
        string ans = "";
        for(int i=0;i<eo;i++){
            char sign ;
            int low , high;
            cin>>sign>>low>>high;
            if(high>=maxi&&low<=maxi){
                if(sign=='-')maxi--;
                else maxi++;
            }
           ans+= " "+to_string(maxi);
        }
        cout<<ans<<endl;
    }
    
}