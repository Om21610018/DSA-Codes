#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        unordered_map<ll, ll> m;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            m[a[i]] = b[i];
        }
        vector<ll> ans;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
            ans.push_back(m[a[i]]);
        for (auto it : a)
            cout << it << " ";
        cout << endl;
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}