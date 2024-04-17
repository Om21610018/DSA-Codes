#include <bits/stdc++.h>
using namespace std;
int main()
{
    //* When the size of vector is known and it is declared
    // vector<int> v1(5);
    // cout << "Enter the " << v1.size() << " elements : " << endl;
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cin >> v1[i];
    // }
    // for (auto x : v1)
    // {
    //     cout << x << " ";
    // }

    //* When the size of the vector is not declared :
    vector<int> v2;
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v2.push_back(t);
    }
    for (auto x : v2)
    {
        cout << x << " ";
    }
}
