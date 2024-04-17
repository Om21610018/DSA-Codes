// Given an integer array where every element occurs twice except one occurs only once. Find that unique element.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int res = 0;
    vector<int> arr = {2, 1, 3, 2, 1, 5, 5, 6, 3};
    for (int i = 0; i < arr.size(); i++)
    {
        res ^= arr[i];
    }
    cout << res;
}