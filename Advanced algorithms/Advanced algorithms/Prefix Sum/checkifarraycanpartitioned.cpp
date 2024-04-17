//* Check if array can be partitioned in two parts
#include <bits/stdc++.h>
using namespace std;
bool isPartitioned(vector<int> arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        arr[i] += arr[i - 1];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (2 * arr[i] == arr[arr.size() - 1])
            return true;
    }
    return false;
}
int isPartitionedidx(vector<int> arr) // returns index
{
    for (int i = 1; i < arr.size(); i++)
    {
        arr[i] += arr[i - 1];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (2 * arr[i] == arr[arr.size() - 1])
            return i;
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 5, 10};
    cout << isPartitioned(arr) << endl;
    cout << isPartitionedidx(arr);
}