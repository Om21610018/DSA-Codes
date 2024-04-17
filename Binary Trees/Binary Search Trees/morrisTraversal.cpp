#include <bits/stdc++.h>
using namespace std;

// vector<int> inorderTraversal(TreeNode *root)
// {
//     vector<int> arr;
//     TreeNode *curr = root;
//     while (curr != NULL)
//     {
//         if (curr->left != NULL)
//         {
//             TreeNode *pred = curr->left;
//             while (pred->right != NULL && pred->right != curr)
//                 pred = pred->right;
//             if (pred->right == NULL)
//             {
//                 pred->right = curr;
//                 curr = curr->left;
//             }
//             else
//             { // pred->right==curr
//                 pred->right = NULL;
//                 arr.push_back(curr->val);
//                 curr = curr->right;
//             }
//         }
//         else
//         { // curr->left == NULL
//             arr.push_back(curr->val);
//             curr = curr->right;
//         }
//     }
//     return arr;
// }


int main()
{
}