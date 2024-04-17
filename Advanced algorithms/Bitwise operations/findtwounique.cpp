// Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.
#include <bits/stdc++.h>
using namespace std;

void findUnique(int *arr, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
        res = res ^ arr[i];

    int temp = res;
    int k = 0;
    while (true)
    {
        if (temp & 1 == 1)
        {
            break;
        }
        temp >>= 1;
        k++;
    }
    int retval = 0;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        if (((num >> k) & 1) == 1)
            retval ^= num;
    }
    cout << retval << " ";
    res = retval ^ res;
    cout << res << " ";
}
int main()
{
    int arr[] = {1, 2, 1, 3, 2, 5};
    int n = 6;
    findUnique(arr, n);
    return 0;
}