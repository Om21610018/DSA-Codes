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

void preorder(Node *root) // local variable
{
    if (root == NULL) // base case
        return;
    cout << root->val << " "; // work
    preorder(root->left);     // call 1
    preorder(root->right);    // call 2
}
void postorder(Node *root) // local variable
{
    if (root == NULL) // base case
        return;
    postorder(root->left);    // call 1
    postorder(root->right);   // call 2
    cout << root->val << " "; // work
}
void inorder(Node *root) // local variable
{
    if (root == NULL) // base case
        return;
    inorder(root->left);      // call 1
    cout << root->val << " "; // work
    inorder(root->right);     // call 2
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
    // preorder(a);
    postorder(a);
    // inorder(a);
}