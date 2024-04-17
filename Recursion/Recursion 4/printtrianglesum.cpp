#include <bits/stdc++.h>
using namespace std;
void printsum(vector<int> &v) // e
{
    if (v.size() < 1)
        return;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> temp(v.size() - 1);
    for (int i = 0; i < v.size() - 1; i++)
    {
        temp[i] = v[i] + v[i + 1];
    }
    printsum(temp);
}
int main()
{
    vector<int> v = {5, 4, 3, 2, 1};
    printsum(v);
}