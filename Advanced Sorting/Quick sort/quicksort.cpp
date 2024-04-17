#include <bits/stdc++.h>
using namespace std;
/*
* Algorithm :

- Set the first element at its sorted place using the quick sort function
- agr naya array nhi bna rhe ho toh  apko indices lgenge array ke

- As of now we will take the first element as a pivot element i.e. starting point
- to set the pivot : find pivot indexand then swap
                   : just find the number of smaller elements than arr[starting idx].


*/
int partitionrandomized(int arr[], int si, int ei)
{
    int pivotElement = arr[(si + ei) / 2]; // arr[si]; //*but we uses randomised pivot point
    int cnt = 0;
    for (int i = si; i <= ei; i++) // imp i=si //* as it is randomised
    {
        if (i == (si + ei) / 2)
            continue;
        if (arr[i] <= pivotElement) // can be < of <=
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
int partition(int arr[], int si, int ei)
{
    int pivotElement = arr[si]; // arr[si]; //*but we uses randomised pivot point
    int cnt = 0;
    for (int i = si + 1; i <= ei; i++) // imp i=si+1
    {
        // if(i==si)continue; //* if we start i from si
        if (arr[i] <= pivotElement)
            cnt++;
    }
    int pivotIdx = cnt + si; //*IMP
    swap(arr[si], arr[pivotIdx]);
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
void quickSort(int arr[], int si, int ei)
{

    // Base case
    if (si >= ei)
        return;
    // At starting we will assume starting index as pivot index
    // 5, 1, 8, 2, 7, 6, 3, 4
    int pi = partitionrandomized(arr, si, ei);
    // 4, 1, 3, 2, _5_ , 7, 8, 6 apply quick sort on the left and right part of 5
    quickSort(arr, si, pi - 1);
    quickSort(arr, pi + 1, ei);
}
int main()
{
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4, -5, 55, 0, 767, -65};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    quickSort(arr, 0, n - 1);
    cout << "" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}