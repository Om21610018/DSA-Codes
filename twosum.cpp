#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter target : " << endl;
    cin >> x;
    int n;
    cout << "Enter the size of vector : " << endl;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    cout << "" << endl;
    // two sum

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << "[ " << i << " , " << j << " ]" << endl;
            }
        }
    }
}