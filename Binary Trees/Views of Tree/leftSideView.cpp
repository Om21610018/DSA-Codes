#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int level(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(level(root->left), level(root->right));
}

void traverse(Node *root, vector<int> &ans, int lvl)
{
    if (root == NULL)
        return;
    ans[lvl] = root->data;
    traverse(root->right, ans, lvl + 1);
    traverse(root->left, ans, lvl + 1);
}

vector<int> leftView(Node *root)
{
    vector<int> ans(level(root), 0);
    traverse(root, ans, 0);
    return ans;
}

int main()
{
}