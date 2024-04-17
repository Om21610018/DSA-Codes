/*
Given a sorted array of non-negative distinct integers, find the smallest
missing non-negative element in it.

e.g.

arr = {0,1,2,3,4,8,9,12};
ans=5;
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {0, 1, 3, 8, 9, 12};
    // for (int i = 0; i < arr.size(); i++)
    // { //O(n) ---> Time complexity
    //     if (arr[i] != i)
    //     {
    //         cout << i << endl;
    //         break;
    //     }
    // }

    //* Motive of binary search is to reduce the search space in half in one operation

    int low = 0;
    int high = arr.size() - 1;
    // we have to match the index of array with it's value if it is matching reduce the left part
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid - 1] == mid - 1 && arr[mid] != mid)
        {
            cout << mid << endl;
            break;
        }
        else if (arr[mid] == mid)
        {
            low = mid + 1;
        }
        else if (arr[mid] != mid)
        {
            high = mid;
        }
    }
}