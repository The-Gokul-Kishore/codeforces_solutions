#include<bits\stdc++.h>
using namespace std;
int main(){
    int testcases = 0;
    cin>>testcases;
    for(int T = 0;T<testcases;T++){
        int a,b;
        cin>>a>>b;
      if(a%2==1){
        cout<<"NO"<<endl;
      }else if(a==0&&b%2==1){
        cout<<"NO"<<endl;
      }
      else if(a%2==0){
        cout<<"YES"<<endl;
      }else {
        cout<<"NO"<<endl;
      }
    }
    return 0;
}