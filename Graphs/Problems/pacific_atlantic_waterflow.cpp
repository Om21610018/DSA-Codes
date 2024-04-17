#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dir = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
int rows, cols;
vector<vector<int>> h;
vector<vector<bool>> bfs(queue<pair<int, int>> &q)
{
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    while (!q.empty())
    {
        auto top = q.front();
        q.pop();
        int i = top.first;
        int j = top.second;
        visited[i][j] = true;
        for (int d = 0; d < 4; d++)
        {
            int nr = i + dir[d][0];
            int nc = j + dir[d][1];
            if (nr < 0 || nc < 0 || nr >= rows || nc >= cols)
                continue;
            if (visited[nr][nc])
                continue;
            if (h[nr][nc] < h[i][j])
                continue;
            q.push({nr, nc});
        }
    }
    return visited;
}
vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
{
    rows = heights.size();
    cols = heights[0].size();
    h = heights;
    queue<pair<int, int>> p;
    queue<pair<int, int>> a;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 || j == 0)
                p.push({i, j});
            if (i == rows - 1 || j == cols - 1)
                a.push({i, j});
        }
    }
    vector<vector<bool>> pa = bfs(p);
    vector<vector<bool>> at = bfs(a);
    vector<vector<int>> ans;
    for (int i = 0; i < pa.size(); i++)
    {
        for (int j = 0; j < pa[0].size(); j++)
        {
            if (pa[i][j] == at[i][j] && pa[i][j] == true && at[i][j] == true)
                ans.push_back({i, j});
        }
    }
    return ans;
}