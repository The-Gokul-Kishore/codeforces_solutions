#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,k,x;
        cin>>n>>k>>x;
        string s;
        cin>>s;
        vector<int>postfix(n),prefix(n);
        int zerocnt =0;
        int onecnt = 0;
        for(int i=n-2;i>=0;i--){
            if(s[i]=='0'){
                zerocnt++;
                    postfix[i] = postfix[i+1];
                
            }else{

                postfix[i] =  postfix[i+1] + zerocnt;
                

                
            }
        }
        
        zerocnt =  count(s.begin(),s.end(),'0');
        for(int i=1;i<n;i++){
            if(s[i]=='0'){
                zerocnt--;
                prefix[i] = prefix[i-1];
            }else{
                prefix[i] = prefix[i-1]+zerocnt;
            }
        }
        int possum =0;
        int cnt =0;
        if((prefix[n-1]%k==0)&& x>=n){
            cout<<1<<endl;
        }else{
            cout<<x<<endl;
        }
        
    }
}
