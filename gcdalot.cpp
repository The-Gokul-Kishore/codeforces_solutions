#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T ;
    cin>>T;
    while(T--){
        int l,r;
        cin>>l>>r;
        int cnt =0;
        unordered_map<int,bool>nopes;
        for(int i=l;i<=r;i++){
            bool turn = 0;
            if(nopes.find(i)!=nopes.end())continue;
            for(int j= i+1;j<=r;j++){
                if(nopes.find(j)!=nopes.end())continue;
                for(int k=j+1;k<=r;k++){
     
                   if(nopes.find(k)!=nopes.end())continue;
                    if(__gcd(i,j)==1&&__gcd(j,k)==1&&__gcd(i,k)==1){
                         cnt++;
                        nopes[i] =123 ;nopes[j]=123 ;nopes[k] = 231;
                        turn =1;
                        break;
                    }
                }
                if(turn){
                    break;
                }
            }

        }
        cout<<cnt<<endl;
 
    }
    return 0;
}