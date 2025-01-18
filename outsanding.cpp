#include<bits\stdc++.h>
using namespace std;
int main(){
    long test;
    cin>>test;
    for(long t=0;t<test;t++){
        long n;
        cin>>n;
        long maxi =0,mini = INT_MAX;
        vector<pair<long,long>>arr(n);
        unordered_map< long,long >freqa,freqb,freqsame;
        for(long i=0;i<n;i++){
            long a,b;
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
        unordered_map<long,long>firstuniq;
        queue<long>uniques;
        for(long i=0;i<=2*n;i++){
            if(freqsame.find(i)==freqsame.end()){
                uniques.push(i);
            }
        }
        for(long i=0;i<=2*n;i++){
            if(uniques.empty()){
                firstuniq[i]=-1;
            }
            firstuniq[i] = uniques.front();
            if(uniques.front()==i){
                uniques.pop();
            }
        }
        for(long i=0;i<n;i++){
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