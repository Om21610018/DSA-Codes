#include <bits/stdc++.h>
using namespace std;

void solve(string str, int l, int r, int &n)
{
    if (r > l)
        return;
    if (l == n && r == n)
    {
        cout << str << endl;
        return;
    }
    if (l <= n)
        solve(str + "(", l + 1, r, n);
    if (r < l)
        solve(str + ")", l, r + 1, n);
}

int main()
{
    int n;
    cin >> n;
    solve("", 0, 0, n);
}