#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {4, 1, 6, 2, 5, 3};

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    // Algorithm
    int i = 0;
    while (i < arr.size())
    {
        int correctIdx = arr[i] - 1;
        if (i != correctIdx)
        {
            swap(arr[i], arr[correctIdx]);
        }
        else
            i++;
    }
    cout << "" << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}