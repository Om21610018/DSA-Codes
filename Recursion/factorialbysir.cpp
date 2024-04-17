#include <bits/stdc++.h>
using namespace std;

int fact(int n, int lim)
{
    if (n == 0)
        return 1;
    int res = n * fact(n - 1, lim);
    if (n == 1)
    {
        cout << n << "*";
        return 1;
    }
    else if (n == lim)
        cout << n << "=";
    else
        cout << n << "*";
    return res;
}
int main()
{
    cout << fact(1,1);
}
