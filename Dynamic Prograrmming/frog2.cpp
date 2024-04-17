#include <bits/stdc++.h>
using namespace std;
vector<int> h;
vector<int> dp;
int f(int i)
{
    if (i > h.size())
        return INT_MAX;
    if (i == h.size() - 1)
        return 0; // last stone
    if (dp[i] != INT_MAX)
        return dp[i];
    int ans = INT_MAX;
    for (int j = 1; j <= 2; j++)
    {
        if (i + j >= h.size())
            break;
        ans = min(ans, abs(h[i] - h[i + j]) + f(i + j));
    }
    return dp[i] = ans;
}

int main()
{
    int n;
    cin >> n;
    h.resize(n);
    dp.clear();
    dp.resize(n + 1, INT_MAX);
    for (int i = 0; i < n; i++)
        cin >> h[i];
    cout << f(0);
    return 0;
}