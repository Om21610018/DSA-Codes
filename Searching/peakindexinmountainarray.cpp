#include <bits/stdc++.h>
using namespace std;
// there can't be a sorted search space

int peakindex(vector<int> &v)
{
    // O(logn ) bola mtlb binary search hi lgega
    int l = 0;// we can take l=1 and h=n-2
    int h = v.size() - 1;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (v[m] > v[m + 1] && v[m] > v[m - 1] )
            return m;
        else if (v[m] < v[m + 1]) // as hme bada element i.e. peak element chahiye
            l = m + 1;
        else if (v[m - 1] > v[m]) // as hme bada element i.e. peak element chahiye
            h = m - 1;
    }
    return -1;
}
int main()
{
    vector<int> v = {1, 3, 5, 6, 4, 3, 2, 0}; // we have to return the peak index of the value i.e. ans is 2
    int res = peakindex(v);
    cout << res;
}