#include <bits/stdc++.h>
using namespace std;
/*
Steps :
- find the pivot element
- both part left and right to pivot element are sorted
- apply binary search in both the parts

-> Pivot element is the largest element and can't be find using the linear search as we want it in O(lon n)
-> if(arr[m]<arr[m-1]&&arr[m]<arr[m+1])
        pivot=arr[m];
-> if(arr[m]>arr[m-1]&&arr[m]>arr[m+1])
        pivot=arr[m];

-> else if(arr[m]>arr[h]){
         l=m+1;
}
   else if(arr[m]<arr[h])
        h=m-1;

- 0 index element can never be pivot
- if(m==0) l=m+1;
- if(m==n-1) h=m-1;

* if array was already sorted, then you won't find the pivot element.


*/

int searchinsortedarr(vector<int> &nums, int target)
{
    if (nums.size() == 2)
    {
        if (target == nums[0])
            return 0;
        else if (target == nums[1])
            return 1;
        else
            return -1;
    }
    int n = nums.size() - 1;
    int pivot = -1; // smallest element
    int l = 0, h = n;
    // finding pivot element i.e. the smallest element
    // 0 index element can never be pivot
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (m == 0)
            l = m + 1;
        else if (m == n - 1)
            h = m - 1;
        else if (nums[m] < nums[m - 1] && nums[m] < nums[m + 1] && m >= 0 && m <= n)
        {
            pivot = m;
            break;
        }
        else if (nums[m] > nums[h])
            l = m + 1;
        else if (nums[m] < nums[h])
            h = m - 1;
    }

    if (pivot == -1) // already sorted, no rotation
    {
        l = 0;
        h = n;
    }
    else if (target >= nums[pivot] && target <= nums[n])
    {
        l = pivot;
        h = n;
    }
    else
    {
        l = 0;
        h = pivot - 1;
    }

    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (nums[m] == target)
            return m;
        else if (nums[m] > target)
        {
            h = m - 1;
        }
        else
            l = m + 1;
    }
    return -1;
}
int main()
{
    vector<int> arr = {28, 33, 1, 3, 4, 8, 20}; // this is the rotated sorted array by k=2 we know this only
    int target = 4;
    int res = searchinsortedarr(arr, target);
    cout << res;
}