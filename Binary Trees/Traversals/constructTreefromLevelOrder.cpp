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
        if (arr[j] != INT_MIN)
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

void pre_order_iterative(Node *root)
{
    stack<Node *> st;
    cout << "" << endl;
    if (root != NULL)
        st.push(root);
    while (!st.empty())
    {
        Node *temp = st.top();
        st.pop();

        cout << temp->val << " ";
        if (temp->right)
            st.push(temp->right);
        if (temp->left)
            st.push(temp->left);
    }
    cout << "" << endl;
}

void post_order_iterative(Node *root)
{
    stack<Node *> st;
    vector<int> ans;
    if (root)
        st.push(root);
    while (!st.empty())
    {
        Node *temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if (temp->left)
            st.push(temp->left);
        if (temp->right)
            st.push(temp->right);
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << "" << endl;
}

void in_order_iterative(Node *root)
{
    Node *node = root;
    stack<Node *> st;
    while (!st.empty() || node)
    {
        if (node)
        {
            st.push(node);
            node = node->left;
        }
        else
        { // node == NULL
            Node *temp = st.top();
            st.pop();
            cout << temp->val << " ";
            node = temp->right;
        }
    }
    cout << "" << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, INT_MIN, 5, 6, 7};

    // Construct
    Node *root = construct(arr);
    levelOrderQueue(root);
    pre_order_iterative(root);
    in_order_iterative(root);
    post_order_iterative(root);






}