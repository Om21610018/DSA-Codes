#include <bits/stdc++.h>
using namespace std;
int firstoccur(vector<int> &v, int x, int l, int h)
{
    int mid = l + (h - l) / 2;
    if (l > h)
        return l;
    if (v[mid] == x)
    {
        // if (v[mid - 1] == x) // no error will occur on runtime as else condition is present
        //     return firstoccur(v, x, l, mid - 1);
        // else
        //     return mid;
        return firstoccur(v, x, l, mid - 1);
    }
    else if (v[mid] > x)
        return firstoccur(v, x, l, mid - 1);
    else
        return firstoccur(v, x, mid + 1, h);
}
int lastoccur(vector<int> &v, int x, int l, int h)
{
    int mid = l + (h - l) / 2;
    if (l > h)
        return h;
    if (v[mid] == x)
    {
        // if (v[mid + 1] == x)
        //     return lastoccur(v, x, mid + 1, h);
        // else
        //     return mid;
        return lastoccur(v, x, mid + 1, h);
    }
    else if (v[mid] > x)
        return lastoccur(v, x, l, mid - 1);
    else
        return lastoccur(v, x, mid + 1, h);
}
int main()
{
    vector<int> v = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 6, 9};
    int x = 9;
    int fir = firstoccur(v, x, 0, v.size() - 1);
    int las = lastoccur(v, x, 0, v.size() - 1);
    cout << "First occurence of " << x << " : " << fir << " and last occurence is : " << las << endl;
}