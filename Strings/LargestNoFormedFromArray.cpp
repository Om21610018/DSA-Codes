#include <bits/stdc++.h>
using namespace std;
static bool cmp(string s1, string s2)
{
    return s1 + s2 > s2 + s1;
}
string printLargest(int n, vector<string> &v)
{
    // code here
    sort(v.begin(), v.end(), cmp);
    string result = "";
    for (int i = 0; i < n; i++)
    {
        result += v[i];
    }
    return result;
}