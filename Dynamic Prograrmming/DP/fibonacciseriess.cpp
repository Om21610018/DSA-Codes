#include <bits/stdc++.h>
using namespace std;

vector<long long> dp;
long long ftd(long long n)
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = ftd(n - 1) + ftd(n - 2);
}
long long fbu(long long n)
{
    vector<long long> arr(n + 1, -1);
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
        arr[i] = arr[i - 1] + arr[i - 2];
    return arr[n];
}
int main()
{
    long long n = 100;
    dp.clear();
    dp.resize(n + 2, -1);
    cout << ftd(n) << endl;
}