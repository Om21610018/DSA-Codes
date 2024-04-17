#include <bits/stdc++.h>
#define inf INT_MAX
using namespace std;

vector<int> dp;
int f(int n)
{
    if (n == 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = 1 + min(f(n - 1), min((n % 2 == 0 ? f(n / 2) : inf), (n % 3 == 0 ? f(n / 3) : inf)));
}

int main()
{
    int n;
    cin >> n;
    dp.clear();
    dp.resize(n + 1, -1);
    cout << f(n);
}