#include <bits/stdc++.h>
using namespace std;
void firstNegtiveWindow(vector<int> &arr, vector<int> &ans, int &k)
{
    int n = arr.size();
    int p = -1;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            p = i;
            break;
        }
    }
    if (p == -1)
        ans[0] = 1;
    else
        ans[0] = arr[p];
    int i = 1;
    int j = k;
    while (j < n)
    {
        if (p >= i)
            ans[i] = arr[p];
        else
        {

            for (p = i; p <= j; p++)
                if (arr[p] < 0)
                    break;
            if (p > j)
            {
                ans[i] = 1;
                p = i;
            }
            else
                ans[i] = arr[p];
        }
        i++;
        j++;
    }
}
int main()
{
    vector<int> arr = {2, 3, 4, 4, -7, -1, 4, -2, 6};
    int k = 5;
    int n = arr.size();
    vector<int> ans(n - k + 1);
    firstNegtiveWindow(arr, ans, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}