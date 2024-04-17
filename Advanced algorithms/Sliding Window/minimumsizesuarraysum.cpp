//*Minimum size subarray sum
/*
Here we have to find the window size

*/

#include <bits/stdc++.h>
using namespace std;
int minsizesubsum(vector<int> &nums, int target) // BruteForce Solution
{
    int ans = INT_MAX;
    int n = nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            if (sum >= target && ans > j - i + 1)
            {
                ans = j - i + 1;
                break;
            }
        }
    }
    if (ans == INT_MAX)
        return 0;
    return ans;
}
int minsizesubsum2(vector<int> &nums, int target) // Sliding window
{
    int n = nums.size();
    int sum = 0;
    int len = 0;
    int minlen = INT_MAX;
    int i = 0, j = 0;
    while (j < n)
    {
        sum += nums[j];
        while (sum >= target)
        {
            len = j - i + 1;
            minlen = min(len, minlen);
            sum -= nums[i];
            i++;
        }
        j++;
    }
    if (minlen == INT_MAX)
        return 0;
    return minlen;
}

int main()
{
    vector<int> nums = {1, 2, 4, 6, 3, 4, 3};
    int target = 10;
    cout << minsizesubsum2(nums, target) << endl;
}