#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    cout << n << endl;
    int res = n * fact(n - 1);
    cout << "hogya" << res << "  " << n << endl;
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
}