    for(int t=0;t<T;t++){
        int n;
        cin>>n;
        string s ;
        cin>>s;
        map<int,int>maper;
        for(int i=0;i<n;i++){
            cout<<s[i]-'0'<<" ";
            maper[s[i]-'0'] ++;
        }
        int miner = 0;
        int maxer = 1;
        if(maper[0]>maper[1]){
            miner =1;
            maxer = 0;
        }
        int cnt =0;
        for(int i=1;i<=n;i++){
            if(maper[miner]==i||maper[maxer]==i){
                cnt++;
                continue;
                    
            }
            int flips =i;
        
            if((flips-maper[miner])%2==0){
                cnt++;
                continue;
                
            }
            if((flips-maper[maxer])%2==0){
                cnt++;
                continue;
            }
            
        }
        cout<<cnt<<endl;
    }
