#include <bits/stdc++.h>
using namespace std;

void solve(int n, string temp)
{
    if (n == 0)
    {
        cout << temp << endl;
        return;
    }
    solve(n - 1, temp + "0");
    solve(n - 1, temp + "1");
}

int main()
{

    int n;
    cin >> n;
    solve(n, "");
}