#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void display(Node *root) // local variable
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}

int sum(Node *root)
{
    if (root == NULL)
        return 0;
    // int leftSum = sum(root->left);
    // int rightSum = sum(root->right);
    // return root->val + leftSum + rightSum;
    // * OR
    return root->val + sum(root->left) + sum(root->right);
}

int size(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + size(root->left) + size(root->right);
}

int maxInTree(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    return max(root->val, max(maxInTree(root->left), maxInTree(root->right)));
}
int maxInTree2(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    int leftMax = maxInTree2(root->left);
    int rightMax = maxInTree2(root->right);
    return max(root->val, max(leftMax, rightMax));
}

int minInTree(Node *root)
{
    if (root == NULL)
        return INT_MAX;
    return min(root->val, min(minInTree(root->left), minInTree(root->right)));
}

long long product(Node *root)
{
    if (root == NULL)
        return 1;
    return root->val * product(root->left) * product(root->right);
}

int level(Node *root)
{
    if (root == NULL)
        return 0;
    int llev = level(root->left) + 1;
    int rlev = level(root->right) + 1;
    return max(llev, rlev);
}
int level2(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(level(root->left), level(root->right));
}
void print_nth_level_of_tree(Node *root, int n, int currlvl)
{ // left to right
    if (root == NULL)
        return;

    if (currlvl == n)
    {
        cout << root->val << " ";
        return; // needless calls ko stop krega and kaam ki hi calls lgega
    }
    print_nth_level_of_tree(root->left, n, currlvl + 1);
    print_nth_level_of_tree(root->right, n, currlvl + 1);
}
void print_nth_level_of_tree2(Node *root, int n, int currlvl)
{ // right to left
    if (root == NULL)
        return;

    if (currlvl == n)
    {
        cout << root->val << " ";
        return; // needless calls ko stop krega and kaam ki hi calls lgega
    }
    print_nth_level_of_tree2(root->right, n, currlvl + 1);
    print_nth_level_of_tree2(root->left, n, currlvl + 1);
}

void level_Order_traversal(Node *root)
{
    int n = level2(root);
    for (int i = 1; i <= n; i++)
    {
        print_nth_level_of_tree(root, i, 1);
        cout << endl;
    }
}

void levelOrderQueue(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}
void levelOrderQueuerev(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if (temp->right)
            q.push(temp->right);
        if (temp->left)
            q.push(temp->left);
    }
}

void level_Order_queue_print(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *temp = q.front();
            q.pop();
            cout << temp->val << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        cout << endl;
    }
}

int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    // display(a);
    // cout << "" << endl;
    // cout << sum(a) << endl;
    // cout << size(a) << endl;
    // cout << maxInTree(a) << endl;
    // cout << minInTree(a) << endl;
    // cout << product(a) << endl;
    // cout << level(a) << endl;
    // print_nth_level_of_tree(a, 1, 1);
    // cout << "" << endl;
    // print_nth_level_of_tree(a, 2, 1);
    // cout << "" << endl;
    // print_nth_level_of_tree(a, 3, 1);

    // level_Order_traversal(a);
    // levelOrderQueue(a);
    level_Order_queue_print(a);
}