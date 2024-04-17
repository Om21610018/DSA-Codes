#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int si, int ei)
{
    int pe = arr[(si + ei) / 2];
    int cnt = 0;
    for (int i = si; i <= ei; i++)
    {
        if (i == (si + ei) / 2)
            continue;
        if (arr[i] <= pe)
            cnt++;
    }
    int pi = cnt + si; //* This is important
    swap(arr[pi], arr[(si + ei) / 2]);
    int i = si;
    int j = ei;
    while (i <= pi && j >= pi)
    {
        if (arr[i] <= pe)
            i++;
        else if (arr[j] > pe)
            j--;
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pi;
}
void quickSort(vector<int> &arr, int si, int ei)
{
    if (si >= ei)
        return;
    int n = arr.size();
    int pi = partition(arr, si, ei);

    quickSort(arr, si, pi - 1);
    quickSort(arr, pi + 1, ei);
}
int quickSelect(vector<int> &arr, int si, int ei, int k)
{

    int pi = partition(arr, si, ei);

    if (pi + 1 == k)
        return arr[pi];
    else if (pi + 1 > k)
        return quickSelect(arr, si, pi - 1, k);
    else
        return quickSelect(arr, pi + 1, ei, k);
}

int main()
{

    vector<int> arr = {4, 1, 2, 3, 6, 5, 0, -77, 88};
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "" << endl;
    quickSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    cout << "" << endl;
    cout << quickSelect(arr, 0, arr.size() - 1, 11) << endl;
}