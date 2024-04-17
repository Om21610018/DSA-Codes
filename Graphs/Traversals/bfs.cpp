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

//* BFS CODE :
void bfs(int src, int dest, vector<int> &dist)
{
    queue<int> qu;
    visited.clear();
    dist.resize(v, INT_MAX);
    dist[src] = 0;
    visited.insert(src);
    qu.push(src);

    while (!qu.empty())
    {
        int curr = qu.front();
        qu.pop();
        for (auto neighbour : graph[curr])
        {
            if (visited.find(neighbour) == visited.end())
            {
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
}

int main()
{
    cin >> v;
    graph.resize(v, list<int>());
    vector<int> dist;
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
    bfs(x, y, dist);
    for (int i = 0; i < dist.size(); i++)
    {
        cout << i << " -> " << dist[i] << endl;
    }
    return 0;
}

void bfs2(int src, int dest, vector<int> &dist)
{
    dist.clear();
    dist.resize(v, INT_MAX);
    queue<int> q;
    q.push(src);
    dist[src] = 0;
    visited.insert(src);
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (auto neighbour : graph[curr])
        {
            if (visited.find(neighbour) == visited.end())
            {
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
}