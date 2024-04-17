#include <bits/stdc++.h>
using namespace std;
// T.C. : O(nlog(n)) | Total operations : 2nlog(n) | merge sort is stable.
int inversion(vector<int> &a, vector<int> &b)
{
    int cnt = 0;
    int i = 0;
    int j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] > b[j])
        {
            cnt += a.size() - i; //*Important
            j++;
        }
        else
            i++;
    }
    return cnt;
}
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

void mergeSort(vector<int> &arr, int &cnt)
{
    int n = arr.size();
    if (n == 1)
        return;

    int n1 = n / 2;
    vector<int> a(arr.begin(), arr.begin() + n1), b(arr.begin() + n1, arr.end());

    mergeSort(a, cnt);
    mergeSort(b, cnt);
    cnt += inversion(a, b); //*Important
    merge(a, b, arr);
    a.clear();
    b.clear();
}

int main()
{
    int cnt = 0;
    vector<int> arr = {5, 1, 8, 2, 3};
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "" << endl;
    mergeSort(arr, cnt);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "" << endl;
    cout << cnt;
}