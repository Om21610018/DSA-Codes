#include <bits/stdc++.h>
using namespace std;

unordered_set<int> visited;
void dfs(vector<vector<int>> &rooms, int curr)
{
    visited.insert(curr);
    for (int i = 0; i < rooms[curr].size(); i++)
        if (visited.find(rooms[curr][i]) == visited.end())
            dfs(rooms, rooms[curr][i]);
    return;
}
bool canVisitAllRooms(vector<vector<int>> &rooms)
{
    dfs(rooms, 0);
    return visited.size() == rooms.size();
}