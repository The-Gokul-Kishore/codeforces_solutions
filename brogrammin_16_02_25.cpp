#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        int turns = 0;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                turns++;
            }
        }
        if(arr[0]!='0')turns++;
        cout<<turns<<endl;
    }
    return 0;
}
