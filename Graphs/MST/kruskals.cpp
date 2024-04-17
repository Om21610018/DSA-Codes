#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &parent, int a)
{
    if (parent[a] == a)
        return a;
    return parent[a] = find(parent, parent[a]);
}

bool Union(vector<int> &parent, vector<int> &rank, int a, int b)
{
    a = find(parent, a);
    b = find(parent, b);
    if (a == b)
        return false;
    if (rank[a] > rank[b])
    {
        rank[a]++;
        parent[b] = a;
    }
    else
    {
        rank[b]++;
        parent[a] = b;
    }
    return true;
}

struct Edge
{
    int src;
    int dest;
    int wt;
};
bool cmp(Edge e1, Edge e2)
{
    return e1.wt < e2.wt;
}
long long int kruskal(vector<Edge> &input, int n, int e)
{
    sort(input.begin(), input.end(), cmp);
    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 1);
    for (int i = 0; i < parent.size(); i++)
        parent[i] = i;
    long long int ans = 0;
    for (int i = 0; i < input.size(); i++)
    {
        auto e = input[i];
        if (Union(parent, rank, e.src, e.dest))
            ans += e.wt;
    }
    return ans;
}
int main()
{
    vector<Edge> input;
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        Edge e;
        cin >> e.src >> e.dest >> e.wt;
        input.push_back(e);
    }
    cout << kruskal(input, n, e);
    return 0;
}