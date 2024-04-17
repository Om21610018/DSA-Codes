#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        if (v[i] < 0)
            i++;
        else if (v[j] > 0)
            j--;
        else if (v[i] >= 0 && v[j] <= 0)
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "" << endl;
    solve(v);
    for (auto i : v)
    {
        cout << i << " ";
    }
}