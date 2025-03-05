#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,k;
        cin>>n>>k;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int start = 0;
        int maxlen = 1;
        int last =-1 ;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                int diff = nums[i-1]-nums[i];
                if(diff>k){

                    start = i;
                }else if(last>=start){
                    start = last+1;
                }else{
                    last  = i;
                    nums[i] = nums[i]*k;
                }
            }
            maxlen = max(maxlen,i-start+1);
        }
        cout<<maxlen<<endl;
    }
}
