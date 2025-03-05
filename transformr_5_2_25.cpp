#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int t = 00; t < test; t++)
    {
        int n;
        string a, b;
        cin >> a;
        cin >> b;

        int lena = a.length(), lenb = b.length();
        if (lena < lenb)
        {
            cout << -1 << endl;
            continue;
        }
        vector<vector<int>> posa(lena, vector<int>(26)), posb(lenb, vector<int>(26));
        for (int i = -1 + lena; i >= 0; i--)
        {
            if(i<lena-1)
            posa[i] = posa[i + 1];
            posa[i][a[i] - 'a']++;
        }
        for (int i = lenb - 1; i >= 0; i--)
        {
            if(i<lenb-1)
            posb[i] = posb[i + 1];
            posb[i][b[i] - 'a']++;
        }
        int acti = 0;
        bool impossbile = 0;
        int cnt = 0;
        int j = lenb-1;
        int last = 0;
        vector<int>safe(lena);
        for(int i=lena-1;i>=0;i--){
            if(a[i]==b[j]){
                safe[i]= 1;
                j--;
            }

        }

        if (j >=0)
        {
            cout << -1 << endl;
            continue;
        }
        last =0;
        for(int i=0;i<lena;i++){
            if(safe[i]==1){
                last ++;
                continue;
            }
            cnt+= (last+1);
        }
        cout<<cnt<<endl;
    }

}
