#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
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

//* DFS CODE :
bool dfs(int curr, int end)
{
    if (curr == end)
        return true;
    visited.insert(curr); // mark visited
    for (auto neighbour : graph[curr])
    {
        if (visited.find(neighbour) == visited.end())
        {
            bool result = dfs(neighbour, end);
            if (result == true)
                return true;
        }
    }
    return false;
}

bool anyPath(int src, int dest)
{
    return dfs(src, dest);
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
        // add_edge(s, d);//* Undirected_unweighted graph
        add_edge(s, d);
    }
    // display();
    int x, y;
    cin >> x >> y;
    cout << anyPath(x, y) << endl;
    return 0;
}

bool dfs2(int curr, int end)
{
    if (curr == end)
        return true;
    visited.insert(curr);
    for (auto neighbour : graph[curr])
    {
        if (visited.find(neighbour) == visited.end())
        {
            bool result = dfs2(neighbour, end);
            if (result)
                return true;
        }
    }
    return false;
}