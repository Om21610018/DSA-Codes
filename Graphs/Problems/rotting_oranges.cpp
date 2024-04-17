#include <bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>> &grid)
{
    int fo = 0;
    int mins = 0;
    queue<pair<int, int>> q;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 2)
                q.push({i, j});
            if (grid[i][j] == 1)
                fo++;
        }
    }
    q.push({-1, -1});
    vector<vector<int>> dir = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
    while (!q.empty())
    {
        auto cell = q.front();
        q.pop();
        if (cell.first == -1 && cell.second == -1)
        {
            mins++;
            if (q.empty())
                break;
            else
                q.push({-1, -1});
        }
        else
        {

            int i = cell.first;
            int j = cell.second;
            for (int d = 0; d < 4; d++)
            {
                int nr = i + dir[d][0];
                int nc = j + dir[d][1];
                if (nr < 0 || nc < 0 || nr >= grid.size() || nc >= grid[0].size())
                    continue;
                if (grid[nr][nc] == 2 || grid[nr][nc] == 0)
                    continue;
                fo--;
                grid[nr][nc] = 2;
                q.push({nr, nc});
            }
        }
    }
    return fo == 0 ? mins - 1 : -1;
}