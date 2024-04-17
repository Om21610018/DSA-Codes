#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &parent, int x)
{
    //* This method returns which group/cluster x belongs to
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent, parent[x]); // path compression
}

void Union(vector<int> &parent, vector<int> &sz, vector<int> &minimal, vector<int> &maximal, vector<int> &rank, int a, int b)
{
    //* T.C. : O(log*n);
    a = find(parent, a);
    b = find(parent, b);
    if (a == b)
        return;
    if (rank[a] > rank[b])
    {
        rank[a]++;
        parent[b] = a;
        sz[a] += sz[b];
        maximal[a] = max(maximal[a], maximal[b]);
        minimal[a] = min(minimal[a], minimal[b]);
    }
    else
    {
        rank[b]++;
        parent[a] = b;
        sz[b] += sz[a];
        maximal[b] = max(maximal[a], maximal[b]);
        minimal[b] = min(minimal[a], minimal[b]);
    }
}

void file_i_o()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    file_i_o();
    int n, m;
    //* n-> no. of elements , m -> no. of queries
    cin >> n >> m;

    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 0);
    vector<int> sz(n + 1, 1);
    vector<int> minimal(n + 1);
    vector<int> maximal(n + 1);
    for (int i = 0; i <= n; i++)
        parent[i] = minimal[i] = maximal[i] = i;

    while (m--)
    {
        string str;
        cin >> str;
        if (str == "union")
        {
            int x, y;
            cin >> x >> y;
            Union(parent, sz, minimal, maximal, rank, x, y);
        }
        else
        {
            int x;
            cin >> x;
            x = find(parent, x);
            cout << minimal[x] << " " << maximal[x] << " " << sz[x] << endl;
        }
    }

    return 0;
}