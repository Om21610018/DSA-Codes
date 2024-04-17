#include <bits/stdc++.h>
using namespace std;

int inversion(vector<int> &a, int l, int m, int h)
{
    int i = l;
    int j = m + 1;
    int cnt = 0;

    while (i <= m && j <= h)
    {
        if (a[i] > a[j])
        {
            cnt += m + 1 - i;
            j++;
        }
        else
            i++;
    }
    return cnt;
}

void merge(vector<int> &a, int l, int h, int m)
{
    vector<int> v;
    int i = l;
    int j = m + 1;
    while (i <= m && j <= h)
    {
        if (a[i] <= a[j])
        {
            v.push_back(a[i]);
            i++;
        }
        else
        {
            v.push_back(a[j]);
            j++;
        }
    }
    while (i <= m)
    {
        v.push_back(a[i++]);
    }
    while (j <= h)
    {
        v.push_back(a[j++]);
    }
    for (int i = l; i <= h; i++)
        a[i] = v[i - l]; //*Important
}

void mergeSort(vector<int> &a, int l, int h, int &cnt)
{

    if (l >= h)
        return;
    int m = (l + h) / 2;
    mergeSort(a, l, m, cnt);
    mergeSort(a, m + 1, h, cnt);
    cnt += inversion(a, l, m, h);
    merge(a, l, h, m);
}
int main()
{
    int cnt = 0;
    vector<int> arr = {5, 1, 8, 2, 3};
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "" << endl;
    mergeSort(arr, 0, arr.size() - 1, cnt);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "" << endl;
    cout << cnt;
}