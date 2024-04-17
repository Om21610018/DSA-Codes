//*Binary search :

/*
- it works on array sorted in any order ascending or descending order no matter
- Time complexity : O(log(n)) efficient than O(n)
- mostly works on the indices of an array
- works on the algorithm of reduction in search space



* If : h=INT_MAX and l=INT_MAX-10;
* so addition of them will go out of the range of the integer though we divide it by two but sum is calculated first
ways : 
- using long long 
- using m

m = l + (h-l)/2

*Time complexity : 

no of operations : n --> n/2 --> n/4 --> n/16 --> n/32...--> n/(2^x) ~ 1



*Tags : 
given a sorted array --> means waha binary search lagega hi lagega
n/(2^x)=1
*/
#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> &arr, int n, int target)
{
    int l = 0;
    int m;
    int h = n - 1;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (arr[m] == target)
            return m;
        else if (arr[m] > target)
        {
            h = m - 1;
        }
        else if (arr[m] < target)
        {
            l = m + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int res = binarysearch(v, 7, 5);
    cout << res;
}