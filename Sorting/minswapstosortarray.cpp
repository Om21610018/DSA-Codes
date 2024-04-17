// #include <bits/stdc++.h>
// using namespace std;

// int minSwaps(vector<int> &nums)
// {
//     vector<pair<int, int>> p(nums.size());
//     for (int i = 0; i < nums.size(); i++)
//     {
//         p[i].first = nums[i];
//         p[i].second = i;
//     }
//     sort(p.begin(), p.end());
//     int swaps = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (p[i].second == i)
//             continue;
//         else
//         {
//             swaps++;
//             swap(p[i], p[p[i].second]);
//             i--;
//         }
//     }
//     return swaps;
// }
// int main()
// {
// }