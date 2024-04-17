#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        if (m % 2 == 0)
        {
            ll t = m / 2;
            cout << t * n << endl;
        }
        else
        {
            m--;
            int t = m / 2;
            cout << t * n << endl;
        }
    }
    return 0;
}