#include <bits/stdc++.h>
using namespace std;

void downheapify(int idx, vector<int> &arr, int lastidx)
{

    while (idx < lastidx)
    {
        int lc = 2 * idx + 1;
        int rc = 2 * idx + 2;
        int maxi = idx;
        if (lc < lastidx)
        {
            if (arr[lc] > arr[idx])
                maxi = lc;
            if (rc < lastidx && arr[rc] > arr[maxi])
                maxi = rc;
            if (maxi != idx)
            {
                swap(arr[maxi], arr[idx]);
                idx = maxi;
            }
            else
                break; // as it is a structure of a heap
        }
        else
            break;
    }
}

void heapify(vector<int> &arr)
{

    for (int i = arr.size() / 2; i >= 0; i--)
        downheapify(i, arr, arr.size());
}

void heapSort(vector<int> &arr)
{
    int i = arr.size() - 1;
    while (i != 0)
    {
        swap(arr[0], arr[i]);
        downheapify(0, arr, i);
        i--;
    }
}
int main()
{
    vector<int> arr = {
        5, 44, 100, 101, -100, -200, 5, 4, 7};
    heapify(arr);
    for (auto ele : arr)
        cout << ele << " ";

    cout << "Heap Sort*********" << endl;
    heapSort(arr);
    for (auto ele : arr)
        cout << ele << " ";
}