#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        string wall ;
        cin>>wall;
        if(n<=1){

            cout<<0<<endl;
        }else if(n==2){
            cout<<(wall[0]==wall[1])<<endl;
        }
        unordered_map<string, int> permutations = {
        {"RGB", 0}, {"RBG", 0}, {"GBR", 0},
        {"GRB", 0}, {"BRG", 0}, {"BGR", 0}
        };
        vector<string> patterns = {"RGB", "RBG", "GBR", "GRB", "BRG", "BGR"};
        int start = 0;
        string str = "";
        int maxcnt = INT_MAX;
        int cnt = 0;
            for (auto &perm : permutations) {
                string pattern = perm.first;
                int cnt = 0;

                for (int i = 0; i <= n - 3; i+=3) {


                if (wall[i] != pattern[0]) cnt++;
                if (wall[i + 1] != pattern[1]) cnt++;
                if (wall[i + 2] != pattern[2]) cnt++;

                }
                if(n%3==2){

                    if(wall[n-2]!=pattern[0]) cnt++;
                    if(wall[n-1]!=pattern[1])cnt++;
                }else if(n%3==1){
                    if(wall[n-1]!=pattern[0]) cnt++;
                }
                 maxcnt = min(maxcnt, cnt);

            }


        cout<<maxcnt<<endl;


    }
}
