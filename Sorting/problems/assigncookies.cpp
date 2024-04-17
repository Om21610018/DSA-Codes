#include <bits/stdc++.h>
using namespace std;
int findContentChildren(vector<int> &g, vector<int> &s)
{
    // 2 pointer approaches
    sort(s.begin(), s.end());
    sort(g.begin(), g.end());
    int cnt = 0;
    int i = 0;
    int j = 0;
    while (i < g.size() && j < s.size())
    {
        if (g[i] <= s[j])
        {
            cnt++;
            i++;
            j++;
        }
        else if (g[i] > s[j])
        {
            j++;
        }
    }

    return cnt;
}
int main()
{
    vector<int> g = {10, 9, 8, 7};
    vector<int> s = {5, 6, 7, 8};
    int res = findContentChildren(g, s);
    cout << res;
}