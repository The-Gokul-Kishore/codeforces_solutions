#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long t =0;t<test;t++){
        long long n , x,y;
        cin>>n>>x>>y;
        vector<long long> a(n);
        long long sum =0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a.begin(),a.end());
        long long cnt =0;
        long long lowerlimt = sum-y;
        long long upperlimit = sum-x;
        for(long long i=0;i<n;i++){
            int newsum = sum-a[i];
            int mid;
            int low = i+1;
            int high = n-1;
            mid = (low+high)/2;
            while(low<=high){
                mid = (low+high)/2;
              
                if(a[i]+a[mid]<lowerlimt){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
            int lowpont = low;

            low= i+1;
            high = n-1;
            while(low<=high){
                mid = (low+high)/2;
                
                if(a[i]+a[mid]<upperlimit){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }

            }
            cnt+= low-lowpont;
            cout<<"I:"<<i<<" "<<mid<<" "<<lowpont<<"CNTR "<<cnt<<endl;
        }

        cout<<cnt<<endl;
        
    }
}