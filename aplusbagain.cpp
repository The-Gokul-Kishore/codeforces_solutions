#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    for(int test =0;test<testcase;test++){
        
            string num ;
            cin>>num;
            int sum = 0;;
            for(char i:num){
                sum+= i-'0';
            }
            cout<<sum<<endl;
    }
    return 0;
}