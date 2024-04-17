#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> temp, vector<int> &arr, int t, int idx)
{
    if (t < 0)
        return;
    if (t == 0)
    {
for (int i = 0; i < temp.size(); i++)
            cout << temp[i] << " ";
        cout << endl;
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        temp.push_back(arr[i]);
        solve(temp, arr, t - arr[i], i);
        temp.pop_back();
    }
}

int main()
{
    vector<int> arr = {2, 3, 5};
    int target = 8;
    vector<int> temp;
    solve(temp, arr, target, 0);
}