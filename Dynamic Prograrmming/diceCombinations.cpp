#include <bits/stdc++.h>
using namespace std;
int n;
int mod = 1000000007;
vector<int> dp(1000005, -1);
int f(int n)
{
    if (n == 0)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    int sum = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (n - i < 0)
            break;
        sum = (sum % mod + f(n - i) % mod) % mod;
    }
    return dp[n] = sum % mod;
}

int main()
{

    cin >> n;
    cout << f(n) << endl;
}