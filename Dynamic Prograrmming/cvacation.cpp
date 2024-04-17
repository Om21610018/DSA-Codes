#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> dp(n, vector<int>(3, 0));
    int a, b, c;
    cin >> a >> b >> c;
    dp[0][0] = a;
    dp[0][1] = b;
    dp[0][2] = c;
    for (int i = 1; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        dp[i][0] = x + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = y + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = z + max(dp[i - 1][0], dp[i - 1][1]);
    }
    cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
}