#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int  test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n ,x;
        cin>>n>>x;
        long long  val = 0;
        long long kotae = 0;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(val+arr[i]>kotae){
                kotae = val+arr[i];   
            }
            val+=x;
        }
    
        cout<<kotae<<endl;
    }
    return 0;
}
