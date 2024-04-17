//* Next Permutation :
#include <bits/stdc++.h>
using namespace std;
void reversepart(vector<int> &v, int start, int end)
{
    while (start < end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}
vector<int> nextpermut(vector<int> &v)
{
    vector<int> ans = v;
    int idx = -1;

    //* Step 1 : found pivot element where the order breaks
    for (int i = ans.size() - 2; i >= 0; i--)
    {
        if (ans[i] < ans[i + 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        sort(ans.begin(), ans.end());
        return ans;
    }

    //* Step 2 : reverse the part from idx to end of array
    reversepart(ans, idx + 1, ans.size() - 1);

    //* Step 3 : swap the element at idx with just greater number than element at idx
    int j = -1;
    for (int i = idx + 1; i < ans.size(); i++)
    {
        if (ans[i] > ans[idx])
        {
            j = i;
            break;
        }
    }
    swap(ans[idx], ans[j]);
    return ans;
}
int main()
{
    vector<int> v = {2, 3, 1};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "" << endl;
    vector<int> res = nextpermut(v);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}