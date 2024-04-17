#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v, int n)
{
    if (n < 0)
        return;
    cout << v[n] << " ";
    print(v, n - 1);
}
int main()
{
    vector<int> v = {3, 4, 5, 7, 6};
    print(v, 4);
}