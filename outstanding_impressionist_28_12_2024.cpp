#include<bits\stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        int maxi =0,mini = INT_MAX;
        vector<pair<int,int>>arr(n);
        unordered_map< int,int >freqa,freqb,freqsame;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            maxi= max(b,maxi);
            mini= min(a,mini);
            arr[i] = {a,b};
            if(a==b){
                freqsame[b]++;
            }
            else{
                freqa[a]++;
                freqb[b]++;
            }
        }
        string answer = "";
        unordered_map<int,int>firstuniq;
        queue<int>uniques;
        for(int i=mini;i<=maxi;i++){
            if(freqsame.find(i)==freqsame.end()){
                uniques.push(i);
            }
        }
        for(int i=mini;i<=maxi;i++){
            if(uniques.empty()){
                firstuniq[i]=-1;
            }
            firstuniq[i] = uniques.front();
            if(uniques.front()==i){
                uniques.pop();
            }
        }
        for(int i=0;i<n;i++){
            bool possible =0;
            if(arr[i].first==arr[i].second){
                if(freqsame[arr[i].first]<=1){
                    possible= 1;
                }
            }else{
                if(firstuniq[arr[i].first]<=arr[i].second&&firstuniq[arr[i].first]!=-1){
                    possible = 1;
                }
            }
            if(possible){
                answer+="1";
            }else{
                answer+="0";
            }
        }
        cout<<answer<<endl;
    

    }
}