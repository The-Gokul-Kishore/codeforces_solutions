#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        unordered_map<int,int>mp;
        vector<int>arr(n);
        int cnt = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
            if(mp[arr[i]]==1){
                cnt++;

            }
        }
        if(cnt==1&&n!=1){
            cout<<"0"<<endl;
            continue;
        }
        int start =-1;
        int longestlen =0;
        int uniq = 0, notuniq=0;
        int maxuniq_rem = 0, maxnon_uniq_rem = 0;
        int l = 0,r= 0;
        int largestanswer =0;
        unordered_map<int,int>freq = mp;
        for(int i=0;i<n;i++){
            if(mp[arr[i]]==1){
                if(start==-1){
                    start = i;
                }
                uniq++;
            }else if (start!=-1){
                mp[arr[i]]--;
                if(mp[arr[i]]==1){
                    uniq++;

                }else{
                    notuniq++;
                }
            }
            if(uniq<notuniq){
                start = -1;
                mp = freq;
                uniq = 0;
                notuniq = 0;
            }
            if(start!=-1&&cnt!=uniq){
                int answer =0;
                int len = i-start+1;
                answer = cnt-uniq;
                int answerlen = n-len - answer;
                if(answerlen>longestlen||(answerlen==longestlen&&(r-l+1<i-start+1))){
                    longestlen = answerlen;
                    l = start;
                    r = i;
                }
            }
        }
        cout<<l+1<<" "<<r+1<<endl;
    }
    return 0;
}
