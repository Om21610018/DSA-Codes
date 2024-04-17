#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int ans = 0;
        map<ll, ll> mapping;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        mapping[0] = 1;
        ll summ = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                summ = summ + a[i];
            }
            else
            {
                summ = summ - a[i];
            }
            if (mapping[summ])
                ans = 1;
            else
                mapping[summ]++;
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}