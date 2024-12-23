#include<bits/stdc++.h>
using namespace std;
int maxi;
int n ;
unordered_map<string, bool> dp;
void maxdiff(int i,int asum ,int bsum , vector<int>& a,vector<int>& b){ 
    if(i==a.size() ){
        return ;
    }
    
    string state = to_string(i)+"|"+to_string(asum)+"|"+to_string(bsum);

    if(dp.find(state)!=dp.end()){
        return ;
    }
    maxi = max(maxi,asum-bsum);
    maxdiff(i+1,asum,bsum,a,b);
    asum+=a[i];
    if(i<n-1){
        bsum+=b[i+1];
    }
    int diff = asum-bsum;
    maxi = max(maxi,diff);
    maxdiff(i+1,asum,bsum,a,b);
    
    
}
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        cin>>n;
        maxi=0;
        unordered_map<string,bool> dp2;
        dp = dp2;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int sum =0;
        int bsum =0;
        for(int i=0;i<n-1;i++){
            if(a[i]-b[i+1]>0){
                sum =sum+ a[i];
                bsum+=b[i+1];
            }
            
        }
        sum+=a[n-1];
        cout<<sum-bsum<<endl;
       
    }
}