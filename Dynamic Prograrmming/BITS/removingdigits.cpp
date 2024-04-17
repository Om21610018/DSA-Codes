#include <bits/stdc++.h>
using namespace std;

int dp[1000005];
vector<int> get_digits(int n)
{
    vector<int> arr;
    while (n)
    {
        if (n % 10)
        {
            arr.push_back(n % 10);
        }
        n /= 10;
    }
    reverse(arr.begin(), arr.end());
    return arr;
}
int f(int n)
{
    if (n == 0)
        return 0;
    if (n <= 9)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    int res = INT_MAX;
    vector<int> d = get_digits(n);
    for (int i = 0; i < d.size(); i++)
    {
        res = min(res, f(n - d[i]));
    }
    return dp[n] = 1 + res;
}

int fbu(int n)
{
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    for (int i = 1; i <= 9; i++)
        dp[i] = 1;
    for (int i = 10; i <= n; i++)
    {
        vector<int> d = get_digits(i);
        int res = INT_MAX;
        for (int j = 0; j < d.size(); j++)
        {
            res = min(res, dp[i - d[j]]);
        }
        dp[i] = 1 + res;
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    memset(dp, -1, sizeof dp);
    cout << fbu(n) << endl;
    return 0;
}