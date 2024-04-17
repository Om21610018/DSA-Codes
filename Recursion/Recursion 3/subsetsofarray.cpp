#include <bits/stdc++.h>
using namespace std;
void printsubsets(vector<int> &arr, int idx, vector<int> v) // har samay apna naya vector bnega so we can't give the  &reference to the v
{
    if (idx == arr.size())
    {
        for (auto i : v)
            cout << i;
        cout << "" << endl;
        return;
    }
    printsubsets(arr, idx + 1, v);
    v.push_back(arr[idx]);
    printsubsets(arr, idx + 1, v);
}
int main()
{
    vector<int> arr = {1, 2, 2};
    vector<int> v;
    printsubsets(arr, 0, v);
}