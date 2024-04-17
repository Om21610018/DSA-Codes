//* Max Consecutive Ones III
#include <bits/stdc++.h>
using namespace std;
//T.C. : O(n);
int longestOnes(vector<int> &nums, int &k)
{
    int n = nums.size();
    int flips = 0, i = 0, j = 0;
    int len = INT_MIN, maxLen = INT_MIN;
    while (j < n)
    {
        if (nums[j] == 1)
            j++;
        else
        { // nums[j]==0
            if (flips < k)
            {
                flips++;
                j++;
            }
            else
            {
                // flips==k
                // len calculate kro
                len = j - i;
                maxLen = max(len, maxLen);
                // flipped zero ke just age laao
                while (nums[i] == 1)
                    i++;
                i++;
                j++;
            }
        }
    }
    len = j - i;
    maxLen = max(len, maxLen);
    return maxLen;
}
int main()
{
    vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 2;
    cout << longestOnes(nums, k);
}