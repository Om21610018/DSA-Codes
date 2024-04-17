// #include <bits/stdc++.h>
// using namespace std;
// TreeNode *build(vector<int> &nums, int lo, int hi)
// {
//     if (lo > hi)
//         return NULL;
//     int mid = hi - (hi - lo) / 2;
//     TreeNode *nn = new TreeNode(nums[mid]);
//     nn->left = build(nums, lo, mid - 1);
//     nn->right = build(nums, mid + 1, hi);
//     return nn;
// }
// TreeNode *sortedArrayToBST(vector<int> &nums)
// {
//     TreeNode *root = build(nums, 0, nums.size() - 1);
//     return root;
// }

// int main()
// {
// }