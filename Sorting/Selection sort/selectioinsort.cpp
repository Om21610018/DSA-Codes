/*
* Selection sort :

steps :
- find the min element in the search space and place  it at first idx
- increament idx
- reduce the search space and find the min element in the reduced search space
- so we have done with sorting of leftmost part
and go on till the end of the array.


* If size of array is  n : then total swaps are "n-1" swaps in worst case.

//* Time Complexity :

Best case : O(n^2) ---> this makes it bad than bubble sort

Average case : O(n^2)

Worst case : O(n^2)


//* Space Complexity : O(1)

//* No. of swaps : n-1

//* Stability of Selection sort :

arr = 5   5'  2   3   1

stable sort : 1   2   3   5   5'

unstable sort : 1   2   3   5'  5 
*Selection sort is unstable sort stable sometimes depends on situation

//* It is bekar than bubble sort

* When to use the selection sort : 
- when cost of swap wants to be minimum
- when we want 'k' min elements from start
- if size of array is small


*/
#include <bits/stdc++.h>
using namespace std;
void selectionsort(vector<int> &v)
{
    for (int idx = 0; idx < v.size() - 1; idx++)
    {
        int min = idx; // here as search space is reducing so min also needs to be reduced
        for (int j = idx; j < v.size(); j++)
        {
            if (v[min] > v[j])
                min = j;
        }
        swap(v[min], v[idx]);
    }
}

void selectsort(vector<int> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        int min = INT_MAX;
        int mindx = -1;
        for (int j = i; j < v.size(); j++)
        {
            if (min > v[j])
            {
                min = v[j];
                mindx = j;
            }
        }
        swap(v[i], v[mindx]);
    }
}

int main()
{
    vector<int> v = {3, 4, 5, 2, 1, 7, 8, -22, -4, 0};
    selectsort(v);
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";

    for (auto ele : v)
    {
        cout << ele << " ";
    }
}