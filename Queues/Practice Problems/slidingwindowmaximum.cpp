#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    deque<int> dq;//decreasing order mein hoga ye dq
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        while (!dq.empty() && nums[i] >= nums[dq.back()])
            dq.pop_back();

        dq.push_back(i);
        while (i - k + 1 > dq.front())
            dq.pop_front();

        if (i >= k - 1)
            ans.push_back(nums[dq.front()]);
    }
    return ans;
}
int main()
{
}