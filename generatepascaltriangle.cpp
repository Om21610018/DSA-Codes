#include <bits/stdc++.h>
using namespace std;
void display(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++) // v.size() --> no. of rows
    {
        for (int j = 0; j < v[i].size(); j++) // v[i].size()  --> no. of columns
        {
            cout << v[i][j] << " ";
        }
        cout << "" << endl;
    }
}
int main()
{
    int numRows;
    cout << "Enter no. of rows : " << endl;
    cin >> numRows;
    vector<vector<int>> v(numRows);

    // if(j==0 || j==i)
    // v[i][j]=1;
    // else
    // v[i][j] = v[i-1][j] + v[i-1][j-1];

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
                v[i].push_back(1);
            else
                v[i].push_back(v[i - 1][j] + v[i - 1][j - 1]);
        }
    }
    display(v);
}