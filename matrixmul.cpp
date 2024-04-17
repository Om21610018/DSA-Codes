#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r1, c1;
    cout << "Enter row1 and col1 : " << endl;
    cin >> r1 >> c1;
    int r2, c2;
    cout << "Enter row1 and col1 : " << endl;
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Multiplication is not possible" << endl;
        return 0;
    }
    int mat1[r1][c1];
    int mat2[r2][c2];

    cout << "Enter elements of matrix 1 : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "mat1[" << i << "][" << j << "] ->";
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of matrix 2 : " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "mat2[" << i << "][" << j << "] ->";
            cin >> mat2[i][j];
        }
    }
    cout << "Matrix1 is : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << "" << endl;
    }
    cout << "Matrix2 is : " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << "" << endl;
    }

    int res[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            res[i][j] = 0; // as it initially has garbage value
            //* multiply
            for (int k = 0; k < c1; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Result is : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "" << endl;
    }
}