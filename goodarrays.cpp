#include<bits\stdc++.h>
using namespace std;
int main(){
    int T ;
    cin>>T;
    for(int testcases=0;testcases<T;testcases++){
        int l,r;
        cin>>l>>r;
        int i=l;
        int incremntor =1;
        while(i<r){

            cout<<i<<endl;
            i+=incremntor;
            incremntor++;
        }
        cout<<i<<endl;
        if(i<=r)
        cout<<incremntor<<endl;
        else{
            cout<<incremntor-1<<endl;
        }
    }
}