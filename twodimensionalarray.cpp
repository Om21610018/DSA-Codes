/*
* 2-D array :
arrays of array is 2D array

e.g.

int arr[<row_number>][<column_number>];


* Declaration :
//*Column number are mandatory always to give while declaring an 2-D array.

int arr[2][3] ={{1,2,3},{2,3,4}};
int arr[][3]={1,2,3,4,5,6,7,8,9,10,11,12};  # no. of rows are 4 this way can be use iff when u define the array while declaring

int arr[2][];---->error
int arr[][]; ---> error





*/
#include <iostream>

using namespace std;
int main()
{
    int arr[3][3];
    // row -> 3 [0-2]
    // collumns -> 3 [0-2]
    arr[0][0] = 5;
    cout << arr[0][0] << endl;

    int arr2[3][3] = {{1, 2, 3}, {3, 4, 5}, {5, 6, 7}};
    int arr3[3][3] = {1, 2, 3, 3, 4, 5, 5, 6, 7};
    // * Basically arr2 and arr3 are same and exactly equal

    cout << arr2[0][1] << endl;
    cout << arr3[0][1] << endl;
    cout << arr2[1][1] << endl;
    cout << arr3[1][1] << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << arr3[i][j] << " ";
        cout << endl;
    }

    //* Taking 2D array as input from the user
    int row;
    int col;
    cout << "Enter the no. of rows : " << endl;
    cin >> row;
    cout << "Enter the no. of columns : " << endl;
    cin >> col;
    int arr4[row][col];
    cout << "Enter the elements : " << endl;
    int max = INT_MIN;
    int smax = INT_MIN;
    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "arr4[" << i << "][" << j << "] -->";
            cin >> arr4[i][j];
            sum += arr4[i][j];
            if (arr4[i][j] > max)
                max = arr4[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr4[i][j] > smax && arr4[i][j] != max)
                smax = arr4[i][j];
            cout << arr4[i][j] << " ";
        }

        cout << endl;
    }
    cout << "Largest element in 2D array is : " << max << endl;
    cout << "Second Largest element in 2D array is : " << smax << endl;
    cout << "Sum is : " << sum << endl;
}
