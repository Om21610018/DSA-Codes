#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    vector<Node *> neighbors;
    Node()
    {
        val = 0;
        neighbors = vector<Node *>();
    }
    Node(int _val)
    {
        val = _val;
        neighbors = vector<Node *>();
    }
    Node(int _val, vector<Node *> _neighbors)
    {
        val = _val;
        neighbors = _neighbors;
    }
};

vector<Node *> nodeReg;
unordered_set<int> visited;
void dfs(Node *actual, Node *clone)
{
    for (auto neighbor : actual->neighbors)
    {
        if (!nodeReg[neighbor->val])
        {
            Node *nn = new Node(neighbor->val);
            nodeReg[nn->val] = nn;
            clone->neighbors.push_back(nn);
            dfs(neighbor, nn);
        }
        else
            clone->neighbors.push_back(nodeReg[neighbor->val]);
    }
}
Node *cloneGraph(Node *node)
{
    if (node == NULL)
        return NULL;
    Node *clone = new Node(node->val);
    nodeReg.resize(110, NULL);
    nodeReg[clone->val] = clone;
    dfs(node, clone);
    return clone;
}