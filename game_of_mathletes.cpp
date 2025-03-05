#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        unordered_map<int,int>pairs;
        unordered_map<int,int>sizes;
        vector<bool>paired(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sizes[arr[i]]++;
            
        }
        int paircnt =0;
        for(auto iter:sizes){
            if(sizes.find(k-iter.first)!=sizes.end()){
                if(iter.first==k-iter.first){
                    paircnt+= sizes[iter.first]/2;
                }else{
                    paircnt += min(sizes[iter.first],sizes[k-iter.first]);

                }
                sizes[k-iter.first] = 0;
            }
        }
        
        cout<<paircnt<<endl;;
    }
}