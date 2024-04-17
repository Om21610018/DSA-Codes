#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    vector<int> pre(arr.size());
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        pre[i] = sum; //
        // *OR
        // if (i == 0)
        //     pre[i] = arr[i];
        // else
        //     pre[i] = arr[i] + pre[i - 1];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << pre[i] << " ";
    }
}