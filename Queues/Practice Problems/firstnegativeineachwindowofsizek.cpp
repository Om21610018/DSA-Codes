#include <bits/stdc++.h>
using namespace std;
vector<int> first_negative(vector<int> &arr, int k)
{
    vector<int> ans;
    // Push all indices of negative elements in queue;
    queue<int> q;
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] < 0)
            q.push(i);
    for (int i = 0; i < arr.size() - k + 1; i++)
    {
        if (!q.empty() && q.front() == i)
        {
            ans.push_back(arr[q.front()]);
            q.pop();
        }
        else if (!q.empty() && i + k - 1 >= q.front()) // checking that q.front index lies between the range of window or not
            ans.push_back(arr[q.front()]);
        else
            ans.push_back(0);
    }
    return ans;
}
vector<int> first_negative2(vector<int> &arr, int k)
{
    vector<int> ans;
    // Push all indices of negative elements in queue;
    queue<int> q;
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] < 0)
            q.push(i);
    int i = 0;
    while (i <= arr.size() - k)
    {
        // window ke piche wala idx ho queue mein toh
        while (!q.empty() && q.front() < i)
            q.pop();

        if (q.size() == 0 || q.front() >= i + k)
            ans.push_back(0);
        else
            ans.push_back(arr[q.front()]);
        i++;
    }
    return ans;
}
int main()
{
    vector<int> arr = {0, -1, -2, 3, 4, -5, 6, 4, 7, -8};
    vector<int> ans = first_negative(arr, 3);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}