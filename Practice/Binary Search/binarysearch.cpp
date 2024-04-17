#include <bits/stdc++.h>
using namespace std;
int bins(vector<int> &arr, int key, int l, int h)
{
    int mid = l + (h - l) / 2;
    if (l > h)
        return -1;
    if (arr[mid] == key)
        return mid;
    else if (key > arr[mid])
        return bins(arr, key, mid + 1, h);
    else
        return bins(arr, key, l, mid - 1);
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int key = 10;
    cout << bins(arr, key, 0, 7);
}