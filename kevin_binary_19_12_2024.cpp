#include<bits\stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long t= 0;t<test;t++){
        long long n =0;
        string s;
        cin>>s;
        for(long long i=s.length()-1;i>=0;i--){
        
            n =n*10+ (s[i]-'0');
        }
        long long firstone = -1,firstzero = -1;
            for(long long i=0;i<s.length();i++){
                if(s[i]=='1'){
                    firstone  = i+1;
                }else if(firstone>-1&&firstzero==-1){
                    firstzero = i;
                    break;
                }
            }
        if(firstzero==-1){
            cout<<1<<" "<<s.length()<<" "<<"1"<<" 1"<<endl;
            continue;
        }
        long long index = -1;
        long long maxi = 0;
        long long len =s.length();
        long long k = s.length()-firstzero;
        for(long long i=0;i<=len-k;i++){
            if(s[i]=='0')continue;
            string subs = s.substr(i,k);
             long long  sub =stoll(subs);
            sub = sub^n;
            if(sub>maxi){
                maxi = sub;
                index = i+1;
            }
        }

        cout<<"1"<<" "<<s.length()<<" "<<index<<" "<<index+k-1<<endl;;
    }
}