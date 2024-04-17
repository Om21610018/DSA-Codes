#include <bits/stdc++.h>
using namespace std;

vector<int> visiblepeopls(vector<int> &arr)
{
    vector<int> ans(arr.size());
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int cnt = 0;
        int prev = -1;
        if (arr[i + 1] > arr[i])
        {
            cnt = 1;
        }
        else
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                prev = max(prev, arr[j]);
                if (arr[j] >= prev)
                    cnt++;
            }
        }
        ans[i] = cnt;
    }
    return ans;
}

int main()
{

    vector<int> arr = {5, 1, 2, 3, 10};
    vector<int> ans = visiblepeopls(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }


}
