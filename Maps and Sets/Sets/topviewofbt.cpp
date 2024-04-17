#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left, *right;
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
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

void top_view(Node *root)
{
    queue<pair<Node *, int>> q;
    map<int, int> m;
    q.push({root, 0});
    while (!q.empty())
    {
        auto temp = q.front();
        q.pop();

        if (temp.first->left)
            q.push({temp.first->left, temp.second - 1});

        if (temp.first->right)
            q.push({temp.first->right, temp.second + 1});
        if (m.find(temp.second) == m.end())
            m.insert({temp.second, temp.first->val});
    }
    cout << "" << endl;
    for (auto ele : m)
        cout << ele.second << " ";
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, INT_MIN, 6, INT_MIN, INT_MIN, 7, 8};
    Node *root = construct(arr);
    level_Order_queue_print(root);
    top_view(root);
}