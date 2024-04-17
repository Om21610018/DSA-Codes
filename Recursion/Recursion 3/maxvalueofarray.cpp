#include <bits/stdc++.h>
using namespace std;
void findmaxandprint(vector<int> &arr, int idx, int max)
{
    if (idx > arr.size())
    {
        cout << "Max value is : " << max << endl;
        return;
    }
    if (arr[idx] > max)
        max = arr[idx];
    findmaxandprint(arr, idx + 1, max);
}
int findmaxandstore(vector<int> &arr, int idx)
{
    if (idx > arr.size())
        return INT_MIN; // IMPORTANT
    return max(arr[idx], findmaxandstore(arr, idx + 1));
}


int main()
{
    vector<int> arr = {2, 3, 4, 5, 11, 555, 6, 7, 8};

    findmaxandprint(arr, 0, INT_MIN); // array,index,max_value
    cout << "" << endl;
    int res = findmaxandstore(arr, 0);
    cout << res;
}