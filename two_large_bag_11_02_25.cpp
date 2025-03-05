#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
          unordered_map<int,int>duplis;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            duplis[arr[i]]++;
        }
        sort(arr.begin(),arr.end());
        int duplicnt =0;;
        for(int i=0;i<=arr.back();i++){
            if(duplis.find(i)!=duplis.end()){

                if(duplis[i]>1){
                    duplicnt+= duplis[i]-2;
                }else{
                    if(duplicnt>0){
                        duplicnt--;
                    }else{
                        duplicnt =-11;
                        break;
                    }
                }
            }else if(duplicnt==0){
                continue;
            }else{

                if(duplicnt==1){
                    break;
                }else{
                    duplicnt-=2;
                }
            }

        }


        if(duplicnt<0||duplicnt%2!=0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}
