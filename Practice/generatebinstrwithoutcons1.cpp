#include <bits/stdc++.h>
using namespace std;

void solve(string str, int n)
{
    if (n == 0)
    {
        cout << str << endl;
        return;
    }
    solve(str + "0", n - 1);
    if (str.size() == 0)
        solve(str + "1", n - 1);
    else
    {
        if (str[str.size() - 1] != '1')
            solve(str + "1", n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    solve("", n);
}