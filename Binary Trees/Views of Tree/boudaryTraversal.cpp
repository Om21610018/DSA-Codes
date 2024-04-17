#include <bits/stdc++.h>
using namespace std;
// Construct BT from BFS
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

int level2(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(level2(root->left), level2(root->right));
}
void levelOrderQueue(Node *root)
{
    queue<Node *> q;
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

Node *construct(vector<int> &arr)
{
    int n = arr.size();
    queue<Node *> q;
    Node *root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;

    while (!q.empty() && i < n)
    {
        Node *temp = q.front();
        q.pop();

        Node *lNode = NULL;
        if (arr[i] != INT_MIN)
            lNode = new Node(arr[i]);
        Node *rNode = NULL;
        if (j != n && arr[j] != INT_MIN)
            rNode = new Node(arr[j]);
        temp->left = lNode;
        temp->right = rNode;

        if (lNode)
            q.push(lNode);
        if (rNode)
            q.push(rNode);
        i += 2;
        j += 2;
    }

    return root;
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
    print_nth_level_of_tree2(root->left, n, currlvl + 1);
    print_nth_level_of_tree2(root->right, n, currlvl + 1);
}

void level_Order_traversal(Node *root)
{
    int n = level2(root);
    for (int i = 1; i <= n; i++)
    {
        print_nth_level_of_tree2(root, i, 1);
        cout << endl;
    }
}

void leftBoundary(Node *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return;
    cout << root->val << " ";
    leftBoundary(root->left);
    if (root->left == NULL) // agr left exist nhi krta tabhi right mei jao
        leftBoundary(root->right);
}
void rightBoundaryrev(Node *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return;
    rightBoundaryrev(root->right);
    if (root->right == NULL) // agr left exist nhi krta tabhi right mei jao
        rightBoundaryrev(root->left);
    cout << root->val << " "; // if mei nhi hai isliye iski line change kiyi toh changes hoga
}
void bottomBoudary(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val << " ";
        return;
    }
    bottomBoudary(root->left);
    bottomBoudary(root->right);
}

void boundary(Node *root)
{
    leftBoundary(root);
    bottomBoudary(root);
    rightBoundaryrev(root->right);
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, INT_MIN, 6, 7, INT_MIN, 8, INT_MIN, 9, 10, INT_MIN, 11, INT_MIN, 12, INT_MIN, 13, INT_MIN, 14, 15, 16, INT_MIN, 17, INT_MIN, INT_MIN, 18, INT_MIN, 19, INT_MIN, INT_MIN, INT_MIN, 20, 21, 22, 23, INT_MIN, 24, 25, 26, 27, INT_MIN, INT_MIN, 28, INT_MIN, INT_MIN};
    Node *root = construct(arr);
    level_Order_traversal(root);
    // Boundary Traversal
    cout << "" << endl;
    // leftBoundary(root);
    // cout << "" << endl;
    // bottomBoudary(root);
    // cout << "" << endl;
    // rightBoundaryrev(root->right);
    boundary(root);
}