#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
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
void dfs(int curr, int end, vector<int> path)
{
    if (curr == end)
    {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr); // mark visited
    path.push_back(curr);
    for (auto neighbour : graph[curr])
    {
        if (visited.find(neighbour) == visited.end())
        {
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

void all_path(int src, int dest)
{
    vector<int> v;
    dfs(src, dest, v);
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
    all_path(x, y);
    cout << endl;
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}