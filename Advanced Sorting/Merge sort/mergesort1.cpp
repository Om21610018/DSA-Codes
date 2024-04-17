//*Merge sort :
/*


Revisiting the older sorting algorithms :

Bubble sort : O(n^2)
Selection sort : O(n^2)
Insertion sort : O(n^2)

Merge sort : O(n log(n))
Quick sort : O(n log(n))

* Time complexity : O(nlog(n))



*/
// #include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0; // pointer for array a
    int j = 0; // pointer for array b
    int k = 0; // pointer for array res
    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j]) // This makes merge sort stable
        {
            res[k++] = a[i++];
            // i++;
            // k++;
        }
        else
        {
            res[k++] = b[j++];
            // j++;
            // k++;
        }
    }
    while (i < a.size())
    {
        res[k++] = a[i++];
        // i++;
        // k++;
    }
    while (j < b.size())
    {
        res[k++] = b[j++];
        // j++;
        // k++;
    }
}

void mergeSort(vector<int> &v) // we want same vector sorted not its copy i.e. &v
{
    int n = v.size();
    if (v.size() == 1) // we want base array of single size
        return;
    int n1 = n / 2, n2 = n - (n / 2);
    // copy pasting
    vector<int> a(v.begin(), v.begin() + n1);
    vector<int> b(v.begin() + n1, v.end());

    // magic aka recursion
    mergeSort(a);
    mergeSort(b);

    // merge
    merge(a, b, v); // end se chalu hoga i.e. start merging from base case
    a.clear();      //*Optimization to space complexity : O(n)
    b.clear();      //*Optimization to space complexity : O(n)
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
    mergeSort(a);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
}