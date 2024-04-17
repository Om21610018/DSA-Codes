#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int low, int high, int mid)
{
    int i = low;     // pointer for array a
    int j = mid + 1; // pointer for array b
    int k = 0;       // pointer for array res
    vector<int> res(high - low);
    while (i <= mid && j <= high)
    {
        if (a[i] >= a[j]) // This makes merge sort stable
        {
            res[k++] = a[i++];
            // i++;
            // k++;
        }
        else
        {
            res[k++] = a[j++];
            // j++;
            // k++;
        }
    }
    while (i <= mid)
    {
        res[k++] = a[i++];
        // i++;
        // k++;
    }
    while (j <= high)
    {
        res[k++] = a[j++];
        // j++;
        // k++;
    }

    for (int i = low; i <= high; i++)//*IMPORTANT
        a[i] = res[i - low];
}

void mergeSort(vector<int> &v, int low, int high) // we want same vector sorted not its copy i.e. &v
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(v, low, mid);
        mergeSort(v, mid + 1, high);
        merge(v, low, high, mid);
        return;
    }
}
int main()
{
    // int arr[] = {1, 4, 5, 8};
    // int n1 = sizeof(arr) / sizeof(arr[0]);
    // vector<int> a(arr, arr + n1);

    // int brr[] = {2, 3, 6, 7, 10, 12};
    // int n2 = sizeof(brr) / sizeof(brr[0]);
    // vector<int> b(brr, brr + n2);

    // vector<int> res(n1 + n2);
    // merge(a, b, res);
    // for (int i = 0; i < res.size(); i++)
    //     cout << res[i] << " ";

    int arr[] = {5, 1, 3, 0, 4, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> a(arr, arr + n);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << "" << endl;
    mergeSort(a, 0, n);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
}