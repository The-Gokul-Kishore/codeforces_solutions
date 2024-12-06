#include<bits/stdc++.h>
using namespace std;
int helper(int i){
   return 0; 
}
int main(){
    string x,y;
    int s,r;
    cin>>x>>y;
    cin>>s>>r;
    if(y.length()<x.length()){
        cout<<"Impossible";
    }
    unordered_map<char,int>xf,yf;
    unordered_map<char,vector<int>>yp,xp;
    int ylen = y.length(),xlen = x.length();
    for(int i=0;i<x.length();i++){
        xf[x[i]]++;
        xp[x[i]].push_back(i);
        yf[y[i]]++;
        yp[y[i]].push_back(i);
    }
    for(int i=xlen;i<ylen;i++){
        yf[y[i]]++;
        yp[y[i]].push_back(i);
    }
    for(auto xe:xf){
        if(find(yf.begin(),yf.end(),xe.first)==yf.end() || xe.second!=yf[xe.first]){
            cout<<"Impossible";
        }
        
    }
    int cnt =0;
    int totalf=0,totalb=0;
    for(int i=0;i<xlen;i++){
        int globalf =0;
        int globalb =0;
        int newi = i;
        for(auto j:yp[x[i]]){
            int backfact = 0;
            int k , z;
            int ze;
            if(j>0){
                k=j-1;
                z  = i+1;
                while(k>=0&&z<xlen&&y[k]==x[i+1]){
                    k--;
                }
                ze = z;
                backfact = r*(j-k+1);
            } 
            int frontfact =0;
            if(j<ylen){
                k = j+1;
                z = i+1;
                 while(k<ylen&&z<xlen&&y[k]==x[i+1]){
                    k++;
                }
                
                frontfact = s*(j-k+1);
                
                if(frontfact<backfact){

                }
            }

        }
    }
    
}