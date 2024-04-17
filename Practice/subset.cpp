#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void solve(vector<int> temp, vector<int> &arr, int idx)
{
    if (idx == arr.size())
    {
        ans.push_back(temp);
        return;
    }

    solve(temp, arr, idx + 1);
    if (temp.size() == 0)
    {
        temp.push_back(arr[idx]);
        solve(temp, arr, idx + 1);
    }
    else if (temp[temp.size() - 1] == arr[idx - 1])
    {
        temp.push_back(arr[idx]);
        solve(temp, arr, idx + 1);
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> temp;
    solve(temp, arr, 0);
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}