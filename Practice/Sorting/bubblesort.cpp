#include <bits/stdc++.h>
using namespace std;
// Total no. of swaps : n(n-1)/2
void bubblesort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        bool flag = true;
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // it de ides the stability of sort
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
}
void desbubblesort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        bool flag = true;
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] < arr[j + 1]) // it de ides the stability of sort
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
}
bool isAlmostsorted(vector<int> &arr, vector<int> &brr)
{
    bool flag = true;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i == 0)
        {
            if (brr[i] != arr[i] && brr[i] != arr[i + 1])
            {
                flag = false;
                break;
            }
        }
        else if (i == arr.size())
        {
            if (brr[i] != arr[i] && brr[i] != brr[i - 1])
            {
                flag = false;
                break;
            }
        }
        else
        {
            if (brr[i] != arr[i] && brr[i] != arr[i - 1] && brr[i] != arr[i + 1])
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}

bool isAlmostsorted2(vector<int> &brr)
{
    for (int i = 0; i < brr.size(); i++)
    {
        int cnt = 0;
        for (int j = 0; j < brr.size(); j++)
        {
            if (j == i)
                continue;
            if (brr[j] < brr[i])
                cnt++;
        }
        if (abs(i - cnt) == 1 || abs(i - cnt) == 0)
            continue;
        else
            return false;
    }
    return true;
}
int main()
{
    vector<int> arr = {2, 3, 1, 4, 5};
    vector<int> brr = arr;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "" << endl;
    bubblesort(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "" << endl;
    // desbubblesort(arr);
    // for (int i = 0; i < arr.size(); i++)
    //     cout << arr[i] << " ";
    cout << "" << endl;
    // cout << isAlmostsorted(arr, brr) << endl;
    cout << isAlmostsorted2(brr);
}