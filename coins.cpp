#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T =0 ;
    cin>>T;
    for(int test =0;test<T;test++){
        double d,x,y;
        cin>>d>>y>>x;
        if(x==y){
            cout<<0<<endl;
            continue;
        }
        int price = y;
        int turns= 0;
        while(floor(y)>x&&x>0){
            turns++;
            x--;
            y =  y*((100-d)/100);
        }
        if(x>0&&x!=y)
        cout<<turns<<endl;
        else {
            cout<<-1<<endl;
        }
    }
}
