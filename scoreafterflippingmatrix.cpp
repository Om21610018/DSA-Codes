/*
* no. of 1's in leftmost side of a binary no. is maximum then the no. is bigger
* Hint :
- S-1) 0th column must have all 1's and it can be done by flipping the rows having initially zero
- S-2) then check the column where no. of 0's are strictly greater than no. of 1's then flip the columns

*/
#include <bits/stdc++.h>
using namespace std;
int bintodect(vector<int> &v)
{
    int x = 1;
    int sum = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        sum += v[i] * x;
        x *= 2;
    }
    return sum;
}
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

    vector<vector<int>> v = {{0, 0, 1, 1}, {1, 0, 1, 0}, {1, 1, 0, 0}};
    display(v);
    cout << "" << endl;
    int row = v.size();
    int col = v[0].size();
    int res = 0;

    // if(j==0 || j==i)
    // v[i][j]=1;
    // else
    // v[i][j] = v[i-1][j] + v[i-1][j-1];

    for (int i = 0; i < row; i++)
    {
        if (v[i][0] == 0)
        {
            for (int j = 0; j < col; j++)
            {
                if (v[i][j] == 0)
                    v[i][j] = 1;
                else
                    v[i][j] = 0;
            }
        }
    }

    for (int j = 0; j < col; j++)
    {
        int nz = 0;
        int no = 0;
        for (int i = 0; i < row; i++)
        {
            if (v[i][j] == 1)
                no++;
            else
                nz++;
        }
        if (nz > no)
        {
            for (int i = 0; i < row; i++)
            {
                if (v[i][j] == 0)
                    v[i][j] = 1;
                else
                    v[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        res += bintodect(v[i]);
    }

    display(v);
    cout << "" << endl;
    cout << "Result is : " << res << endl;
}