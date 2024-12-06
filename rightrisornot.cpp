#include<bits\stdc++.h>
using namespace std;
int main(){
    int T ;
    cin>>T;
    for(int test =0;test<T;test++){
        int n;
        cin>>n;
        vector<vector<int>>points(n,vector<int>(2));
        unordered_map<int,vector<int>>xvals;
        unordered_map<int,vector<int>>yvals;
        vector<int>yis1;
        vector<int>yis0;
        for(int i=0;i<n;i++){
            cin>>points[i][0]>>points[i][1];
            xvals[points[i][0]].push_back(i);
            yvals[points[i][1]].push_back(i);
        }
        cout<<"SDLFDS"<<endl;
        int cnt =0;
        for(int i=0;i<n;i++){
            cout<<"I"<<i<<" x:"<<points[i][0]<<" y:"<<points[i][1]<<"No of fellow x:"<<xvals[points[i][0]].size()<<" ys:"<<yvals[points[i][1]].size()<<endl;
            if(xvals[points[i][0]].size()>1&&yvals[points[i][1]].size()>1){
                cout<<"HERE:"<<endl;
                int adjs= yvals[points[i][1]].size()-1;
                int midbois =0;
                for(int j=0;j<n;j++){

                }
                cnt += adjs*1;
            }
        }
        cout<<cnt<<endl;
        
    }
}