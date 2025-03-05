#include<bits/stdc++.h>
using namespace std;
int binsearch(vector<int>b,int a1,int a0,int a2 ){
    int l=0,r=b.size()-1;
    while(l<r){
        int mid = l+(r-l)/2;
        int bmid = b[mid];
         if(bmid-a1>a2){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    if(b[l]-a1>a2||b[l]-a1<a0){
        return -1;
    }
    return l;
}

int main()
{
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,m;
        cin>>n>>m;
        vector<int>a(n),b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int k;
        cin>>k;
        bool possible = 1;
        int prev =  min(a[0],k-a[0]);
        for(int i=1;i<n;i++){
            int newa =k-a[i];
            if(a[i]<prev&&newa<prev){
                    possible =0;
                    break;
            }
            if(a[i]>=prev&&newa>=prev){
                prev = min(newa,a[i]);
            }
            else if(a[i]>=prev)
            {
                prev = a[i];
            }else{
                prev = newa;
            }
        }
        if(possible){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
