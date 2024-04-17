#include <bits/stdc++.h>
using namespace std;
vector<int> dp;

int f(int n)
{
    if (n == 1 || n == 3 || n == 2)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = 1 + min({f(n - 1), n % 2 == 0 ? f(n / 2) : INT_MAX, n % 3 == 0 ? f(n / 3) : INT_MAX});
}
int main()
{
    dp.clear();
    dp.resize(10005, -1);
    int n = 500;
    cout << f(n);
}