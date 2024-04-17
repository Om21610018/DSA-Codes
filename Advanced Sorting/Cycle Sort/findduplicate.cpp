#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 3, 2, 4, 5, 5};
    int i = 0;
    int n = arr.size();
    while (i < n)
    {
        int correctIdx = arr[i];
        if (arr[correctIdx] == arr[i])
        {
            cout << arr[i];
            break;
        }
        else
            swap(arr[i], arr[correctIdx]);
    }
}