#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;
void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " -> ";
        for (auto ele : graph[i])
        {
            cout << ele << " , ";
        }
        cout << endl;
    }
}

void dfs(int node, unordered_set<int> &visited)
{
    visited.insert(node);
    for (auto neighbor : graph[node])
        if (visited.find(neighbor) == visited.end())
            dfs(neighbor, visited);
}

int connected_components()
{
    int res = 0;
    unordered_set<int> visited;
    for (int i = 0; i < v; i++)
    {
        // go to every vertex
        // if from a vertex we can initialise   a dfs, we got one more connected_component
        if (visited.find(i) == visited.end())
        {
            res++;
            dfs(i, visited);
        }
    }
    return res;
}

int main()
{
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edge(s, d); //* Undirected_unweighted graph
        // add_edge(s, d, false);
    }
    display();
    cout << endl;
    cout << connected_components();
}