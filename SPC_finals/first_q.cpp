#include <bits/stdc++.h>

using namespace std;
bool issafe(vector<vector<int>> &horses, int i, int j)
{
    for(auto iter:horses){
        int x = iter[0],y= iter[1];
        if(abs(x-i)==abs(y-j)){
            return 0;
        }
        
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n = 8;
        vector<vector<char>> arr(n, vector<char>(n));
        int horsecnt = 0;
        int cnt = 0;
        queue<pair<int, int>> q;
        vector<vector<int>>horses;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cnt++;
                bool m = 0;
                if(arr[i][j]=='m'){
                    m  = 1;
                }
                cin >> arr[i][j];
                if(m&&arr[i][j]!='k'){
                    arr[i][j]='m';
                }
                if (arr[i][j] == 'k')
                {
                    q.push({i, j});
                 
                    horses.push_back({i,j});
                }
            }
        }
        while (!q.empty())
        {
            int i = q.front().first, j = q.front().second;
            q.pop();
            vector<vector<int>> iter = {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{-2,1},{2,-1},{-2,-1}};
            for (auto it : iter)
            {
                if (((i + it[0]) >= 0) && ((i + it[0]) < n) && ((j + it[1]) >= 0) && ((j + it[1]) < n))
                {

                    if (arr[i + it[0]][j + it[1]] != 'k')
                    {
                        arr[i + it[0]][j + it[1]] = 'm';
                    }
                }
            }
        }
        
        cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (issafe(horses,i,j)&&arr[i][j] == '.')
                {
                    cnt++;
                }
                else
                {
                }
            }
        }
        cout << cnt << endl;
    }
}