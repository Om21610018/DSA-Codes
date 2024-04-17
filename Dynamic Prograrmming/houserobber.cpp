#include <bits/stdc++.h>
using namespace std;
vector<int> dp;
int f(vector<int> &nums, int idx)
{
    if (idx == nums.size() - 1)
        return nums[idx];
    if (idx == nums.size() - 2)
        return max(nums[idx], nums[idx + 1]);
    return max(nums[idx] + f(nums, idx + 2), 0 + f(nums, idx + 1));
}

int ftd(vector<int> &nums, int idx)
{
    if (idx == nums.size() - 1)
        return nums[idx];

    if (idx == nums.size() - 2)
        return max(nums[idx], nums[idx + 1]);

    if (dp[idx] != -1)
        return dp[idx]; // if present in dp

    // if first time calculating the value
    return dp[idx] = max(nums[idx] + ftd(nums, idx + 2), 0 + ftd(nums, idx + 1));
}

int fbu(vector<int> &nums)
{
    int n = nums.size();
    dp.clear();
    dp.resize(n);
    dp[n - 1] = nums[n - 1];
    dp[n - 2] = max(nums[n - 1], nums[n - 2]);
    for (int i = n - 3; i >= 0; i--)
        dp[i] = max(nums[i] + dp[i + 2], dp[i + 1]);
    return dp[0];
}

int rob(vector<int> &nums)
{
    if (nums.size() == 1)
        return nums[0];
    dp.clear();
    dp.resize(105, -1); // use max size of the dp
    return fbu(nums);
}

int main()
{
}