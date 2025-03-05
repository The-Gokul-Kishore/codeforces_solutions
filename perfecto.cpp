#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int totsum = (n*(n+1))/2;

        if(fmod(sqrt(totsum),1)==0){
            cout<<-1<<endl;
            continue;
        }
        double sum = 0;
        vector<bool>used(n+1);
        vector<int>ans(n,-1);
        bool notpossible =0 ;
        int index= 0;
        int i=1;
        while(i<=n){
            if(used[i]){i++;continue;}
            if(fmod(sqrt(sum+i),1)==0){
                int j= i+1;
                while(j<=n&&(used[j]||fmod(sqrt(sum+j),1)==0)){
                    j++;
                }

                if(j==n+1){
                    notpossible = 1;
                    break;
                }
                used[j]=1;
                ans[index] =j;
                sum+=j;
            }
            else{
                used[i]=1;
                sum+=i;
                ans[index]= i;
                i++;
            }
            index++;

        }
        if(notpossible){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
