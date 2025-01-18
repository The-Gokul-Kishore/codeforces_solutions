#include<bits/stdc++.h>
using namespace std;
vector<long long> divisors(long long& a){
    vector<long long>divs;
    for (long long i = 1; i <= sqrt(a); i++) {
        if (a % i == 0) {            
            divs.push_back(i);
            if(a/i!=i) 
               divs.push_back(a/i);
        }
    }
    return divs;
}
long long search(long long& a,vector<long long>&divs){
    long long mid ,left= 0,right = divs.size();
    while(left<=right){
        mid = left+ (right-left)/2;
        if(a%divs[mid]!=0){
            right = mid-1;
        }
        else{
            left =mid+1;
        }
    }
    return left;
}
int main(){
    long long test;
    cin>>test;
    for(long long t=0;t<test;t++){
        long long n,k;
        cin>>n>>k;
        vector<long long>nums(n);
        for(long long i=0;i<n;i++){
            cin>>nums[i];
        }
        
        vector<long long>divs = divisors(k);
        sort(divs.begin(),divs.end());
        long long scores = 0;
        for(long long i=0;i<n;i++){
            scores+= search(nums[i],divs)+1;
        }
        cout<<scores<<endl;
    }
}
