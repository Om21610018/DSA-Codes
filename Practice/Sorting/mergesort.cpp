#include <bits/stdc++.h>
using namespace std;
// T.C. : O(nlog(n)) | Total operations : 2nlog(n) | merge sort is stable.
void merge(vector<int> &a, vector<int> &b, vector<int> &arr)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
            arr[k++] = a[i++];
        else
            arr[k++] = b[j++];
    }
    while (i < a.size())
        arr[k++] = a[i++];
    while (j < b.size())
        arr[k++] = b[j++];
}

void mergeSort(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
        return;

    int n1 = n / 2;
    vector<int> a(arr.begin(), arr.begin() + n1), b(arr.begin() + n1, arr.end());

    mergeSort(a);
    mergeSort(b);

    merge(a, b, arr);
    a.clear();
    b.clear();
}

int main()
{
    vector<int> arr = {2, 3, 5, 1, 4, -55, 444, 32, 0};
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "" << endl;
    mergeSort(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}