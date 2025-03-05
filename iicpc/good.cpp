#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,m;
        cin>>n>>m;
        vector<int>a(n),b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mini= INT_MAX;
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        int minindex = 0;
        for(int i=0;i<m;i++){
            if(mini>b[i]){
                mini =b[i];
                minindex = i;
            }
            
        }
        vector<int>newb(m);
        int  j=0;

        for(int i=minindex;i<m;i++){
            newb[j++] = b[i];
        }
        for(int i=0;i<minindex;i++){
            newb[j++] = b[i];
        }
        b = newb;
        j = 0;
        int i=0;
        vector<int>points;
        for(i=0;i<=n-m;i++){
            if(a[i]>b[0]&&!(points.size()>0&&points.back()+m>i)){
                points.push_back(i);
            }
        }
    
        if(a[n-m]==b[0]){
            int i = n-m;
            int k =0;
            while(k<m){
                if(a[i]==b[k]){
                    i++;
                    k++;
                    continue;
                }
                    break;
                
            }
            if(k!=m&&a[i]>b[k]){
                points.push_back(n-m);
            }
        }
            j=0;
            for(int i=0;i<n;i++){
              
                if(j<points.size()&&points[j]==i){
                    j++;

                    for(int k=0;k<m;k++){
                        cout<<b[k]<<" ";
                        i++;
                    }
                    i--;

                }else{
                    cout<<a[i]<<" ";
                }
            }
            cout<<endl;
    }
}
