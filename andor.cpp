#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        vector<int>arr(n);
                int lastone = 0;
        priority_queue<int>prevlast,prevzero;
        int zerocnt = 0, addonecnt =0 ;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i==0||i==1||i%2==1){
                if(arr[i]==0){
                    prevzero.push(i);
                    zerocnt++;
                }
            }
            else{
                if(arr[i]==1)
                {
                    addonecnt++;
                    prevlast.push(i);

                }
            }
        }

        int q;
        cin>>q;
        vector<vector<int>>pairs(q,vector<int>(2));
        for(int i=0;i<q;i++){
            int index ,val;
            cin>>index>>val;
            int sign = 0;
            if(val==1){
                sign = 1;
            }else{
                sign = -1;
            }
            if (index == 1 || index % 2 == 0) {
                zerocnt -= sign;
            } else {
                addonecnt += sign;
            }

if (!prevlast.empty() && index - 1 == prevlast.top() && val != 1) {
    prevlast.pop();
}

if (!prevzero.empty() && index - 1 == prevzero.top() && val != 1) {
    prevzero.pop();
}

if (index != 1 && index % 2 != 0) {
    if (val != 0) {
        prevlast.push(i);
    }
} else {
    if (val == 0) {
        prevzero.push(i);
    }
}
cout<<prevlast.size()<<" "<<prevzero.size()<<endl;;
cout<<"ERRRRRRRR"<<endl;
if (prevzero.empty() ||(!prevlast.empty() && prevzero.top() < prevlast.top())) {
    cout<<prevlast.top()<<" p"<<prevzero.top()<<endl;
    cout << 1 << endl;
} else {
    cout << 0 << endl;
}


    }
}

}
