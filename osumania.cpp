#include<bits\stdc++.h>
using namespace std;
int main(){
    int T = 0;
    cin>>T;
    while(T--){
        int n ;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            string row ="";
            cin>>row;
            for(int j =0;j<row.length();j++){
                if(row[j]=='#'){
                    arr[i] =j;
                    break; 
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            cout<<arr[i]+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}