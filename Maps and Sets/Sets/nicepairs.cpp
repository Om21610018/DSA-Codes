#include <bits/stdc++.h>

using namespace std;

//*Brute Force :
int rev(int n)
{
    int x = n;
    int ans = 0;
    while (x)
    {
        ans = ans * 10 + x % 10;
        x /= 10;
    }
    return ans;
}
int countNicePairs(vector<int> &nums)
{
    int cnt = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            int s1 = nums[i] + rev(nums[j]);
            int s2 = nums[j] + rev(nums[i]);
            if (s1 == s2)
                cnt++;
        }
    }
    return cnt;
}

int main()
{
}