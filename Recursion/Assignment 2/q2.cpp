#include <bits/stdc++.h>
using namespace std;

void find(vector<int> &v, int n, int k, int &ans)
{
    if (n < 0)
    {
        ans = -1;
        return;
    }
    if (v[n] == k)
    {
        ans = n;
        return;
    }
    find(v, n - 1, k, ans);
}
int main()
{
    int ans = -1;
    vector<int> v = {3, 4, 5, 7, 6};
    find(v, 4, 11, ans);
    cout << ans;
}