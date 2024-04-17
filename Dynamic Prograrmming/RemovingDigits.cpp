#include <bits/stdc++.h>
using namespace std;

vector<int> dp(10000005, -1);
// void solve(int n, int t, int &cnt)
// {
//     if (n < 0)
//         return;
//     if (n == 0)
//     {
//         cnt = min(cnt, t);
//         return;
//     }
//     int x = n;
//     while (x)
//     {
//         int rem = x % 10;
//         if (rem != 0)
//         {
//             if (dp[n] != -1)
//             {
//                 cnt = min(cnt, dp[n]);
//                 return;
//             }
//             else
//                 solve(n - rem, t + 1, cnt);
//         }
//         x /= 10;
//     }
//     dp[n] = t;
// }

// int removeDigit(int n)
// {
//     // 1 state of the variable
//     int cnt = INT_MAX;
//     solve(n, 0, cnt);
//     return cnt;
//     int x = n;
//     while (x)
//     {
//         }
//     return 10;
// }

vector<int> get_digits(int n)
{
    vector<int> result;

    while (n > 0)
    {
        if (n % 10 != 0)
        {
            result.push_back(n % 10);
        }
        n /= 10;
    }

    return result;
}

int func(int n)
{
    if (n == 0)
        return 0;
    if (n <= 9)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    vector<int> d = get_digits(n);
    int result = INT_MAX;
    for (int i = 0; i < d.size(); i++)
        result = min(result, func(n - d[i]));

    return dp[n] = 1 + result;
}

int main()
{

    int n;
    cin >> n;
    cout << func(n);
    return 0;
}