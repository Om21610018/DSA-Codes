#include <bits/stdc++.h>
using namespace std;
//* METHOD : 1
// void preorder(TreeNode *root, queue<TreeNode *> &q)
// {
//     if (root == NULL)
//         return;
//     q.push(root);
//     preorder(root->left, q);
//     preorder(root->right, q);
// }
// void flatten(TreeNode *root)
// {
//     if (root == NULL)
//         return;
//     queue<TreeNode *> q;
//     preorder(root, q);
//     root = q.front();
//     q.pop();
//     TreeNode *temp = root;
//     temp->left = NULL;
//     while (!q.empty())
//     {
//         temp->right = q.front();
//         q.pop();
//         temp = temp->right;
//         temp->left = NULL;
//     }
// }

//* METHOD : 2

// void flatten(TreeNode *root)
// {
//     if (root == NULL)
//         return;
//     TreeNode *l = root->left, *r = root->right;
//     root->left = NULL;
//     root->right = NULL;
//     flatten(l);
//     flatten(r);
//     root->right = l;
//     TreeNode *temp = root;
//     while (temp->right != NULL)
//         temp = temp->right;
//     temp->right = r;
// }

//* METHOD : 3 : T.C. O(n) , S.C. : O(1)

int main()
{
}