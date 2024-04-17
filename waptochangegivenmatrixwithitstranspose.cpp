// transpose a matrix in itself
// using single matrix transpose in the

#include <iostream>

using namespace std;
int main()
{

    int row;
    int col;
    cout << "Enter the no. of rows : " << endl;
    cin >> row;
    cout << "Enter the no. of columns : " << endl;
    cin >> col;
    int arr4[row][col];
    cout << "Enter the elements : " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "arr4[" << i << "][" << j << "] -->";
            cin >> arr4[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr4[i][j] << " ";
        }

        cout << endl;
    }

    //* Transpose matrix :

    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++) // j=i+1 this is important
        {
            if (i == j)
                continue;
            else
            {
                int t = arr4[i][j];
                arr4[i][j] = arr4[j][i];
                arr4[j][i] = t;
            }
        }
    }
    cout << "Transpose : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr4[i][j] << " ";
        }

        cout << endl;
    }
}
