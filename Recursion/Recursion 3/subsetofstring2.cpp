#include <bits/stdc++.h>
using namespace std;
/*
Sort the string



*/
void printsubsets(vector<int> &arr, int idx, vector<int> v, bool flag)
{
    if (idx == arr.size())
    {
        for (auto i : v)
            cout << i << " ";
        cout << "" << endl;
        return;
    }
    int t1 = arr[idx];
    if (arr.size() == 1)
    {
        if (flag == true)
        {
            printsubsets(arr, idx + 1, v, true);
        }
        v.push_back(arr[idx]);
        printsubsets(arr, idx + 1, v, true);
        return;
    }
    int t2 = arr[idx+1];
    if (t1 == t2)
    {
        if (flag == true)
        {
            printsubsets(arr, idx + 1, v, true);
        }
        v.push_back(arr[idx]);
        printsubsets(arr, idx + 1, v, false);
    }
    else
    {
        if (flag == true)
        {
            printsubsets(arr, idx + 1, v, true);
        }
        v.push_back(arr[idx]);
        printsubsets(arr, idx + 1, v, true);
    }
}
int main()
{
    vector<int> arr = {2,1,2};
    vector<int> v;
    printsubsets(arr, 0, v, true);
}
