#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i == 0)
            continue;
        else
            arr[i] += arr[i - 1];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}