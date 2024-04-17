#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int main()
{

    int n;
    cout << "Enter the size of vector : " << endl;
    cin >> n;
    vector<int> v;
    cout << "Enter the elements : " << endl;
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
    // reverse array :

    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    cout << "" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}