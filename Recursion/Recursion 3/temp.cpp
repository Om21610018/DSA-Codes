#include <bits/stdc++.h>
using namespace std;

void f()
{
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == c[i] || b[i] == c[i])
            cnt++;
    }
    if (cnt == n)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i)
    {
        f();
    }

    return 0;
}
