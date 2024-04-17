#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> l(n + 1, 0), r(n + 1, 0), f(n + 1, 0);
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int L, R;
        cin >> L >> R;
        l[L]++;
        r[R]++;
    }
    f[1] = l[1];
    for (int i = 2; i <= n; i++)
        f[i] = l[i] - r[i - 1] + f[i - 1];
    vector<int> c(10000005, 0);
    for (int i = 1; i <= n; i++)
        c[f[i]]++;

    int q;

    for (int i = c.size() - 2; i >= 0; i--)
    {
        c[i] += c[i + 1];
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        cout << c[t] << endl;
    }
    return 0;
}







































class Solution {
public:
    int dp[105][105];
    int f(vector<vector<int>>&arr,int i,int j)
    {
        int n=arr.size();
        if(i>=n || j>=n || i<0 || j<0)return 0;
        if(i==0 && j==0)return dp[i][j]= 1;
        if(arr[i][j]==1)return dp[i][j]= 0;
        return dp[i][j] = f(arr,i-1,j)+f(arr,i,j-1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp,-1,sizeof dp);
        return f(obstacleGrid,obstacleGrid.size()-1,obstacleGrid.size()-1);

    }
};