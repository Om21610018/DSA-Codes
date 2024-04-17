#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;
vector<vector<int>> dp2;
string str = "";
int f(string &s1, string &s2, int i, int j, string output)
{
    if (i >= s1.size() || j >= s2.size())
    {
        if (str.size() < output.size())
            str = output;
        return 0;
    }
    if (dp[i][j] != -1)
        return dp[i][j];
    if (s1[i] == s2[j])
        return dp[i][j] = 1 + f(s1, s2, i + 1, j + 1, output + s1[i]);
    else
        return dp[i][j] = max(f(s1, s2, i, j + 1, output), f(s1, s2, i + 1, j, output));
}

void f2(string &s1, string &s2)
{
    dp2.clear();

    dp2.resize(3005, vector<int>(3005, 0));

    for (int i = s1.size() - 1; i >= 0; i--)
    {
        for (int j = s2.size() - 1; j >= 0; j--)
        {
            if (s1[i] == s2[j])
                dp2[i][j] = 1 + dp2[i + 1][j + 1];
            else
                dp2[i][j] = max(dp2[i][j + 1], dp2[i + 1][j]);
        }
    }
}

int main()
{
    // dp.clear();
    string s1;
    string s2;

    cin >> s1 >> s2;
    // dp.resize(3005, vector<int>(3005, -1));
    // f(s1, s2, 0, 0, "");
    // cout << str << endl;
    f2(s1, s2);
    // for (int i = 0; i < s1.size(); i++)
    // {
    //     for (int j = 0; j < s2.size(); j++)
    //     {
    //         cout << dp2[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int m = s1.size(), n = s2.size();
    int i = 0, j = 0;
    string str2 = "";
    while (i < m && j < n)
    {
        if (s1[i] == s2[j])
        {
            str2.push_back(s1[i]);
            i++;
            j++;
        }
        else if (dp2[i + 1][j] > dp2[i][j + 1])
            i++;
        else
            j++;
    }
    // reverse(str2.begin(), str2.end());
    cout << str2 << endl;
}