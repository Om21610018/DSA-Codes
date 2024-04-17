#include <bits/stdc++.h>
using namespace std;
/*
given an array nums of size n return the majority elements,
The majority element is the element tat appears more than n/2 times you may assume that the
maority element always exists in the array. take lower bound.
*/
/*
*Time complexity  :
Bubble sort : O(n^2)
Selection sort : O(n^2)
Insertion sort : O(n^2)

Built-in sort : O(n log n)



Algoritm :
- sort the array using the built-in sort method
- return the middle element of an array as majority element must have to be the middle element
*/

int majorityelement(vector<int> &v)
{
    sort(v.begin(), v.end());
    return v[v.size() / 2];
}
int main()
{
    vector<int> v = {2, 2, 1, 1, 1, 2, 1};
    int res = majorityelement(v);
    cout << res;
}