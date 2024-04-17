#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {3, 0, 1};
    int i = 0;
    int n = arr.size();
    while (i < n)
    {
        int correctIdx = arr[i];
        if (arr[i] == n || correctIdx == i)
            i++;
        else
            swap(arr[i], arr[correctIdx]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i != arr[i])
        {
            cout << i << endl;
            break;
        }
    }
}