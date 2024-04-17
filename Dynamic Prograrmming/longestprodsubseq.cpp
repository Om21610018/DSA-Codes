#include <bits/stdc++.h>
using namespace std;

int dp[10005][10005];
int f(vector<int> &arr, int i, int n)
{
    if (i == arr.size())
        return 1;
    if (dp[i][n] != -1)
        return dp[i][n];
    dp[i][n] = max(f(arr, i + 1, n + 1), arr[i] * f(arr, i + 1, n + 1));
    cout << "Hello" << endl;
    return dp[i][n] / n - 1;
}

int main()
{
    memset(dp, -1, sizeof dp);
    vector<int> arr = {1, 2};
    cout << f(arr, 0, 1);
}