#include <bits/stdc++.h>
using namespace std;
/*
This can be solved using the Selection sort also and also by bubble sort or insertion sort
T.C. : O(k*n);

Merge Sort : O(nlogn)
Quick Select : O(n); Average case --> Worst case O(n^2)

*/

int partitionrandomized(int arr[], int si, int ei)
{
    int pivotElement = arr[(si + ei) / 2]; // arr[si]; //*but we uses randomised pivot point
    int cnt = 0;
    for (int i = si; i <= ei; i++) // imp i=si //* as it is randomised
    {
        if (i == (si + ei) / 2)
            continue;
        if (arr[i] <= pivotElement) // can be <= imp
            cnt++;
    }
    int pivotIdx = cnt + si; //*IMP
    swap(arr[(si + ei) / 2], arr[pivotIdx]);
    int i = si, j = ei;
    while (i < pivotIdx && j > pivotIdx)
    {
        if (arr[i] <= pivotElement) // imp
            i++;
        else if (arr[j] > pivotElement)
            j--;
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

int kthSmallest(int arr[], int si, int ei, int &k)
{
    int pi = partitionrandomized(arr, si, ei);
    if (pi + 1 == k)
        return arr[pi];
    else if (k < pi + 1)
        return kthSmallest(arr, si, pi - 1, k); // left call
    else
        return kthSmallest(arr, pi + 1, ei, k); // right call
}
int main()
{
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4, -5, 55, 0, 767, -65};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 13;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    sort(arr, arr + n);
    cout << "" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
    cout << kthSmallest(arr, 0, n - 1, k);
}