#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter row and col : " << endl;
    cin >> r >> c;
    int matrix[r][c];
    cout << "Enter elements of matrix : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "matrix[" << i << "][" << j << "] ->";
            cin >> matrix[i][j];
        }
    }
    cout << "Matrix is : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "" << endl;
    }
    cout << "Matrix in spiral form  is : " << endl;
    int minr = 0;
    int minc = 0;
    int maxr = r - 1;
    int maxc = c - 1; //  r and c are equal always
    while (minr <= maxr && minc <= maxc)
    {
        /*

          *HINT :

           - right
           - down
           - left
           - up
           again repeat the steps
           then break the loop

           1 loop ke andar 4 loops lagenge
           4 variables required i.e. minrow , maxrow, mincol, maxcol

           Right ->  mincol to maxcol  |  (minrow fix)  | minrow++
           Down  ->  minrow to maxrow  |  (maxcol fix)  | maxcol--
           Left  ->  maxcol to mincol  |  (maxrow fix)  | maxrow--
           Up    ->  maxrow to minrow  |  (mincol fix)  | mincol++
        */

        for (int j = minc; j <= maxc; j++)
        {
            cout << matrix[minr][j] << " ";
        }
        minr++;
        if (minr > maxr || minc > maxc) //*most important
            break;
        for (int i = minr; i <= maxr; i++)
        {
            cout << matrix[i][maxc] << " ";
        }
        maxc--;
        if (minr > maxr || minc > maxc) //*most important
            break;
        for (int j = maxc; j >= minc; j--)
        {
            cout << matrix[maxr][j] << " ";
        }
        maxr--;
        if (minr > maxr || minc > maxc) //*most important
            break;
        for (int i = maxr; i >= minr; i--)
        {
            cout << matrix[i][minc] << " ";
        }
        minc++;
    }
}