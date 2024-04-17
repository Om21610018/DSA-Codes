#include <bits/stdc++.h>
using namespace std;

void iterativesubArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << "" << endl;
        }
    }
}

void subArray(vector<int> v, vector<int> &arr, int idx)
{
    if (idx == arr.size())
    {
        for (int i = 0; i < v.size(); i++)
            cout << v[i];
        cout << "" << endl;
        return;
    }
    subArray(v, arr, idx + 1);
    if(v.size()==0)
    {
        v.push_back(arr[idx]);
        subArray(v, arr, idx + 1);
    }
    else if(arr[idx-1]==v.back())
    {
        v.push_back(arr[idx]);
        subArray(v, arr, idx + 1);
    }
    //OR
    // if(v.size()==0 || arr[idx-1]==v.back())
    // {
    //     v.push_back(arr[idx]);
    //     subArray(v, arr, idx + 1);
    // }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    // iterativesubArray(arr);
    vector<int> v;
    subArray(v, arr, 0); // v,arr,index
}
