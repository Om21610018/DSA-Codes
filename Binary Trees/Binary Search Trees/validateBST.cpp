#include <bits/stdc++.h>
using namespace std;

//*METHOD : 1
// long long maxBT(TreeNode *root)
// {
//     if (root == NULL)
//         return LLONG_MIN;
//     return max((long long)root->val, max(maxBT(root->left), maxBT(root->right)));
// };
// long long minBT(TreeNode *root)
// {
//     if (root == NULL)
//         return LLONG_MAX;
//     return min((long long)root->val, min(minBT(root->left), minBT(root->right)));
// }

// bool isValidBST(TreeNode *root)
// {
//     if (root == NULL)
//         return true;
//     else if ((long long)root->val <= maxBT(root->left))
//         return false;
//     else if ((long long)root->val >= minBT(root->right))
//         return false;
//     return isValidBST(root->left) && isValidBST(root->right);
// }

//*METHOD : 2
// inorder traversal and store in vector and check if it is sorted or not
int main()
{
}