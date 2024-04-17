//*Count Inversions :
/*
Two elements of an array a, a[i] and a[j] form an inversion if a[i]>a[j]
and i<j given an array of intergers. Find the inversion count in the array.

*/
#include <bits/stdc++.h>
using namespace std;
int inversion(vector<int> &a, vector<int> &b)
{
    int c = 0;
    int i = 0;
    int j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] > b[j])
        {
            c += a.size() - i;
            j++;
        }
        else // a[i]<=b[j]
            i++;
    }
    return c;
}
void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0; // pointer for array a
    int j = 0; // pointer for array b
    int k = 0; // pointer for array res
    while (i < a.size() && j < b.size())
        if (a[i] <= b[j]) // This makes merge sort stable
            res[k++] = a[i++];
        else
            res[k++] = b[j++];

    while (i < a.size())
        res[k++] = a[i++];
    while (j < b.size())
        res[k++] = b[j++];
}

void mergeSort(vector<int> &v, int &cnt) // we want same vector sorted not its copy i.e. &v
{
    int n = v.size();
    if (v.size() == 1) // we want base array of single size
        return;
    int n1 = n / 2, n2 = n - (n / 2);
    // copy pasting
    vector<int> a(v.begin(), v.begin() + n1);
    vector<int> b(v.begin() + n1, v.end());

    // magic aka recursion
    mergeSort(a, cnt);
    mergeSort(b, cnt);

    //* We will count the inversions
    cnt += inversion(a, b);

    // merge
    merge(a, b, v); // end se chalu hoga i.e. start merging from base case
    a.clear();      //*Optimization to space complexity : O(n)
    b.clear();      //*Optimization to space complexity : O(n)
}

int main()
{
    int cnt = 0;
    int arr[] = {5, 1, 3, 0, 4, 2, 6}; // 7
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> a(arr, arr + n);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << "" << endl;
    mergeSort(a, cnt);
    cout << cnt;
}