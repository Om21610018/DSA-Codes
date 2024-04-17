#include <bits/stdc++.h>
using namespace std;
int findlastoccur(vector<int> &v, int x)
{
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
            return i;
    }
    return -1;
}
int main()
{
    int x = 1;
    vector<int> v = {1, 3, 2, 4, 3, 4, 1, 6};

    int res = findlastoccur(v, x);
    cout << "Last occurence of : " << x << " is : " << res << endl;
}