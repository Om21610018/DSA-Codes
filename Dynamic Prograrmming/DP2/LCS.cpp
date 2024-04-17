#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;
int f(string &s1, string &s2, int i, int j)
{
    if (i >= s1.size() || j >= s2.size())
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (s1[i] == s2[j])
        return dp[i][j] = 1 + f(s1, s2, i + 1, j + 1);
    else
        return dp[i][j] = max(f(s1, s2, i, j + 1), f(s1, s2, i + 1, j));
}

int main()
{
    dp.clear();
    string s1 = "abxwy";
    string s2 = "axywb";
    dp.resize(1005, vector<int>(1005, -1));
    cout << f(s1, s2, 0, 0);
}