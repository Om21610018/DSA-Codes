#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &image, int i, int j, int ic, int fc)
{
    int n = image.size();
    int m = image[0].size();
    if (i < 0 || j < 0 || i >= n || j >= m)
        return;
    if (image[i][j] != ic)
        return;
    image[i][j] = fc;
    dfs(image, i + 1, j, ic, fc);
    dfs(image, i, j + 1, ic, fc);
    dfs(image, i - 1, j, ic, fc);
    dfs(image, i, j - 1, ic, fc);
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    if (color == image[sr][sc])
        return image;
    dfs(image, sr, sc, image[sr][sc], color);
    return image;
}