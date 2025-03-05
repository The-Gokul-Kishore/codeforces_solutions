#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        long long n;
        cin>>n;
        std::vector<long long>arr(n) ,postfixsum(n);
    
        long long sum = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr.begin(),arr.end());
        
        postfixsum[n-1] = arr[n-1];
        for(int i=n-2;i>=0;i--){
            postfixsum[i]+=arr[i]+postfixsum[i+1];
            sum = max(sum,postfixsum[i+1]+ ((i+1)*(i+1)));
            
        }
        sum = max(sum,n*n);
        cout<<sum<<endl;
    }
}
