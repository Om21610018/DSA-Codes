// #include <bits/stdc++.h>
// using namespace std;
// TreeNode *iop(TreeNode *root)
// {
//     if (root->left == NULL)
//         return NULL;
//     else
//     {
//         TreeNode *pred = root->left;
//         while (pred->right)
//             pred = pred->right;
//         return pred;
//     }
// }
// TreeNode *deleteNode(TreeNode *root, int key)
// {
//     if (root == NULL)
//         return NULL;
//     if (root->val == key)
//     {
//         // case 1 : key node is leaf node
//         if (root->left == NULL && root->right == NULL)
//             return NULL;

//         // case 2 : key node is having one child node
//         if (root->left == NULL || root->right == NULL)
//         {
//             if (root->left)
//                 return root->left;
//             else
//                 return root->right;
//         }
//         // case 3 : key node is having two child node
//         if (root->left != NULL && root->right != NULL)
//         {
//             TreeNode *pred = iop(root);
//             root->val = pred->val;
//             root->left = deleteNode(root->left, pred->val);
//         }
//     }
//     else if (root->val > key)
//         root->left = deleteNode(root->left, key);
//     else
//         root->right = deleteNode(root->right, key);
//     return root;
// }

// int main()
// {
// }