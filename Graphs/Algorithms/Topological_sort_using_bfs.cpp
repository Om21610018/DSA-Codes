#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;

void add_edge(int a, int b, bool bidir = true)
{
    graph[a].push_back(b);
    if (bidir)
    {
        graph[b].push_back(a);
    }
}

void topoBFS()
{
    // Kahn algorithm
    vector<int> indegree(v, 0);
    for (int i = 0; i < v; i++)
        for (auto neighbour : graph[i])
            indegree[neighbour]++;
    queue<int> q;
    unordered_set<int> visited;
    for (int i = 0; i < indegree.size(); i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
            visited.insert(i);
        }
    }
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (auto neighbour : graph[node])
        {
            if (visited.find(neighbour) == visited.end())
            {
                indegree[neighbour]--;
                if (indegree[neighbour] == 0)
                {
                    q.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
    }
}

int main()
{

    cin >> v;
    int e;
    cin >> e;
    graph.resize(v, list<int>());
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        add_edge(x, y, false);
    }
    topoBFS();
    return 0;
}