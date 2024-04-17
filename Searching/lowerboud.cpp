/*
*LOWER BOUND :
given a sorted integer array and an interger 'x', find the lower bound of x.

arr = 1,2,4,5,9,15,18,21,24
so if we have x=20
so lowerbound of 20 is 18 as if 20 present hota toh( 18 and 21 ke beech hota)
and upperbound of 20 is 21 in this array.
*/
#include <bits/stdc++.h>
using namespace std;
int lowerboundusingbs(vector<int> &arr, int x)
{
    int n = arr.size();
    int l = 0;
    int m;
    int h = n - 1;

    while (l <= h) // this is important
    {
        m = l + (h - l) / 2;
        if (arr[m] == x) // agr x hoga toh hi chalega yeh
        {
            if (m != 0)
                return arr[m - 1];
            return -1;
        }
        else if (arr[m] > x)
        {
            h = m - 1; // as arr[m] can't be a lower bound
        }
        else if (arr[m] < x)
        {
            l = m + 1; // as that element at 'm' can be the lower bound
        }
    }
    return arr[h];
}

int upperboundusingbs(vector<int> &v, int x)
{
    int l = 0;
    int h = v.size() - 1;
    int n = v.size();
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (v[m] == x)
        {
            if (m != n - 1)
                return v[m + 1];
            return -1;
        }

        else if (x > v[m])
            l = m + 1;
        else if (x < v[m])
            h = m - 1;
    }
    return v[l]; // it will go on right side
}

int lowerbound(vector<int> &v, int x)
{
    // O(n)
    for (int i = 0; i < v.size(); i++)
    {
        if (x < v[i])
            return v[i - 1];
    }
    return -1;
}
int main()
{
    vector<int> v = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int x = 24;
    int res = lowerboundusingbs(v, x);
    cout << res << endl;
    int res2 = upperboundusingbs(v, x);
    cout << res2;
}