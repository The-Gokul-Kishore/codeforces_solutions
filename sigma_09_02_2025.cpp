#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,m;
        cin>>n>>m;

        vector<vector<int>>arr(n,vector<int>(m+1));
        vector<int>an(n);
        int maxsum = 0,index= 0;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                sum+=arr[i][j];
            }
            arr[i][m]= sum;
        }
        sort(arr.begin(),arr.end(),[&m](vector<int>&a,vector<int>&b){
            if(a[m]!=b[m])return a[m]>b[m];
            for(int i=0;i<m;i++){
                if(a[i]!=b[i])return a[i]>b[i];
            }
            return false;
        });
        long long totsum = 0;
                    long long prevsum =0 ;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                prevsum +=arr[i][j];
                totsum +=prevsum;
            }
        }
        cout<<totsum<<endl;
    }

}
