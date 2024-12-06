#include<bits/stdc++.h>
using namespace std;
int main(){
    int T =0;
    cin>>T;
    for(int tes=0;tes<T;tes++){
        int n ;
        cin>>n;
        int ns = sqrt(n);
        string s ;
        cin>>s;
        if(ns*ns!=n){
            cout<<"NO"<<endl;
            continue;
        }
        bool isfalse =0;
        vector<vector<int>>arr(ns,vector<int>(ns));
        for(int i=0;i<ns;i++){
            for(int j= 0;j<ns;j++){
                arr[i][j]=s[(i)*ns+(j)]-'0';                
                if(i==0||j==0||j==ns-1||i==ns-1){
                    if(arr[i][j]==0){
                        isfalse =1;
                        break;
                    }
                }else if(arr[i][j]==1){
                    isfalse=1;
                    break;
                }
            }
            if(isfalse){
                break;
            }
        }
        if(isfalse){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;

        }
    }       
    return 0;
}