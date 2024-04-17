// Print all increasing sub-sequences of lenght k form first n natural numbers.
/*

n=5   ,k=3

subsequence/sequence : {123,234,345,135,145,125,124,...}order maintain ho bss
{
    123,124,125,134,135,145,234,235,245,345
}


subset : {,1,2,3,4,5,12,23,34,45,24,23,25,123,...}


subarray : Continuous part of array

         {[1,2,3],[3,4,5],[2,3,4]}

*/
#include <bits/stdc++.h>
using namespace std;
int diff = 2;
int cnt = 0;
void printsubsets(vector<int> &arr, int idx, vector<int> v, bool flag, int k)
{
    if (idx == arr.size())
    {
        if (v.size() == k)
        {
            sort(v.begin(), v.end());
            if (v[v.size() - 1] - v[0] <= diff)
                cnt++;
        }
        return;
    }
    int t1 = arr[idx];
    if (arr.size() == 1)
    {
        if (flag == true)
        {
            printsubsets(arr, idx + 1, v, true, k);
        }
        v.push_back(arr[idx]);
        printsubsets(arr, idx + 1, v, true, k);
        return;
    }
    int t2 = arr[idx + 1];
    if (t1 == t2)
    {
        if (flag == true)
        {
            printsubsets(arr, idx + 1, v, true, k);
        }
        v.push_back(arr[idx]);
        printsubsets(arr, idx + 1, v, true, k);
    }
    else
    {
        if (flag == true)
        {
            printsubsets(arr, idx + 1, v, true, k);
        }
        v.push_back(arr[idx]);
        printsubsets(arr, idx + 1, v, true, k);
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    vector<int> v;
    int k = 3;
    printsubsets(arr, 0, v, true, k);
    cout << cnt << endl;
}