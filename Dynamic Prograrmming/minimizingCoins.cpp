#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
vector<int> dp(1000005, -1);
int f(int n, int x)
{
    if (x == 0)
        return 0;
    if (dp[x] != -1)
        return dp[x];

    int result = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (x - arr[i] < 0)
            continue;
        result = min(result, f(n, x - arr[i]));
    }
    if (result == INT_MAX)
        return dp[x] = INT_MAX;

    return dp[x] = 1 + result;
}

int main()
{
    int n;
    int x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int ans = f(n, x);
    if (ans == INT_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;
}