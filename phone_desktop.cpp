#include<iostream>
using namespace std;
int main(){
    int testcases= 00;
    cin>>testcases;
    for(int test = 0; test<testcases; test++){
        int ones,two;
        cin>>ones>>two;
        int cnt = 0;
        while(two>0){
            if(two>=2){
                two-=2;
                cnt++;
                ones-=7;
            }
            else if(two==1){
                two-=1;
                cnt++;
                ones -= 11;
            }
        }
        while(ones>0){
            ones-=15;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}