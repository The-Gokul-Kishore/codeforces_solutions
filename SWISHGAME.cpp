#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	for(int t=0;t<test;t++){
	    int n,k;
	    cin>>n>>k;
	    string moves;
	    cin>>moves;
	    int ps = 0;
	    for(int i=0;i<n;i++){
	        if(moves[i]=='S'){
	            ps++;
	        }
	    }
	    if(ps>=k){
	        cout<<n<<endl;
	    }else{
	        
	        cout<<n+(k-ps-1)<<endl;
	    }

	}

}
