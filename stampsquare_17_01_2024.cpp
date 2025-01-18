#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    for(int t=0;t<test;t++){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>ops(n,vector<int>(2));
        for(int i=0;i<n;i++){
            cin>>ops[i][0]>>ops[i][1];
        }
        long long peri = 0;
        int x = ops[0][0];
        int y = ops[0][1];
        peri+= 4*m;
        
        for(int i=1;i<n;i++){
            int ops1 =m- ops[i][0] , ops2 = m-ops[i][1];
            peri += 2*((ops[i][0]));
            peri += 2*((ops[i][1]));
            x +=ops[i][0],y+=  ops[i][1];
            
        }
        cout<<peri<<endl;
    }
}