#include<bits\stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int t=0;t<T;t++){
        int x,y,j;
        cin>>x;
        cin>>y;
        cin>>j;
        bool turn=1;
        int px=0,py=0;
        int cnt =0;
        while(px<x||py<y){
            if(turn){
                if((x-px)<=j){
                    px = x;
                    cnt++;
                }else{
                    if(x%j!=0){
                        cnt++;
                    }
                    cnt+= x/j;
                    px = x;
                }
                turn =0;
            }else{
                if((y-py)<=j){
                    py=y;
                    cnt++;
                }else{
                    if(y%j!=0){
                        cnt++;
                    }
                    cout<<"cnt:"<<cnt<<"y/j:"<<y/j<<endl;
                        cnt+= y/j;
                        py =y;

                }
                turn = 1;
            }
        }
        cout<<cnt<<endl;

    }
}