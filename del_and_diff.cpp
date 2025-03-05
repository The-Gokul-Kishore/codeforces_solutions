#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        unordered_map<int,int>freq;
        vector<int>arr(n);
        freq[0] =0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            freq[arr[i]]++;
        }
        int notdelcnt =0;
        int zerocnt = 0;
        for(auto iter:freq){
            if(iter.first==0)continue;
            zerocnt += iter.second/2;
            notdelcnt +=iter.second%2;
        }
        zerocnt+=freq[0];
        if(notdelcnt==0){
            cout<<1<<endl;
            continue;
        }
        notdelcnt+= (zerocnt!=0);
        cout<<max(notdelcnt,1)<<endl;

    }
}
