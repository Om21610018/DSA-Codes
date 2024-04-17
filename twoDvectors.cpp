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
void change(int arr[3][3]) // yaha necessity hai ki hme no. of rows and no. of columns pass krna hi pdega
{
    arr[0][0] = 100;
}
int main()
{
    /*
    *Advantages of vectors over arrays :
    - Increase your rows
    - variable columns
    - passing of 2D arrays into functions


    2D vector is vector of vector

     ____
     |__|__
     |__|__|___
     |__|__|__|


    vector<vector<int>>v;
    vector<vector<int>>v(m); --> can store m vectors 1D vectors of any size
    vector<vector<int>>v(m,vector<int>(n));  --> v[m][n] (if considered the situation of array)
    vector<vector<int>>v(m,vector<int>(n,2));  --> v[m][n] (if considered the situation of array) and each block is initialized by 2



    */

    int arr[3][3] = {{1, 2, 3}, {3, 4, 5}, {4, 5, 6}};
    cout << arr[0][0] << endl;
    change(arr); // Pass by reference hi hai yeh
    cout << arr[0][0] << endl;

    // Method : 1
    vector<vector<int>> v1 = {{1}, {1, 2}, {1, 2, 3}};

    // Method : 2
    vector<vector<int>> vec;
    vector<int> vec1;
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    vector<int> vec2;
    vec2.push_back(5);
    vec2.push_back(6);
    vector<int> vec3;
    vec3.push_back(7);
    vec3.push_back(8);
    vec3.push_back(9);
    vec3.push_back(10);
    vec.push_back(vec1);
    vec.push_back(vec2);
    vec.push_back(vec3);
    display(vec);
    cout << "" << endl;
    display(v1);
}