// #include <bits/stdc++.h>
// using namespace std;

// void solve(TreeNode *root, int &sum)
// {
//     if (root == NULL)
//         return;

//     solve(root->right, sum);
//     sum += root->val;
//     root->val = sum;
//     solve(root->left, sum);
// }
// TreeNode *bstToGst(TreeNode *root)
// {
//     int sum = 0;
//     solve(root, sum);
//     return root;
// }
// int main()
// {
// }