//* Rotate image
// transpose a matrix in itself
// using single matrix transpose in the
// Hint : transpose and reverse the columns

#include <iostream>

using namespace std;
int main()
{

    int n;

    cout << "Enter the no. of rows and cols are same : " << endl;
    cin >> n;

    int arr4[n][n];
    cout << "Enter the elements : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "arr4[" << i << "][" << j << "] -->";
            cin >> arr4[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr4[i][j] << " ";
        }

        cout << endl;
    }

    //* Transpose matrix :

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) // j=i+1 this is important
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr4[i][j] << " ";
        }

        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        int st = 0;
        int en = n - 1;
        while (st < en)
        {
            int t = arr4[i][st];
            arr4[i][st] = arr4[i][en];
            arr4[i][en] = t;
            st++;
            en--;
        }
    }

    cout << " After rotating by 90 degree : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr4[i][j] << " ";
        }

        cout << endl;
    }
}
