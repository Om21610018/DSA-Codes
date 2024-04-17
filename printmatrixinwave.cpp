/*

         ------------
         ___________|
         |__________



*/



#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter row and col : " << endl;
    cin >> r >> c;
    int mat[r][c];
    cout << "Enter elements of matrix : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "mat[" << i << "][" << j << "] ->";
            cin >> mat[i][j];
        }
    }
    cout << "Matrix is : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "" << endl;
    }
    cout << "Matrix in wave form  is : " << endl;
    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < c; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << "" << endl;
        }
        else
        {
            for (int j = c - 1; j >= 0; j--)
            {
                cout << mat[i][j] << " ";
            }
            cout << "" << endl;
        }
    }
}