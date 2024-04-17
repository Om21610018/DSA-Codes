/*
* Insertion sort :

*Algoritm to do insertion sort :
Steps :
- divide the array into to arrays one  sorted and other unsorted part
- *consider first element of an array is always sorted
- unsorted part me ka element left wale sorted part me apni correct position dhundega i.e. insert hoga sorted part mein
- it will be done by checking and swapping with the elements in left part and when condition is satisfied it will be placed there



//* Time complexity :
Best case : O(n)

Average case : O(n^2)

Worst case : O(n^2)

//*Space complexity : O(1)

* Maximum no. of swaps (worst case) : n(n-1)/2

* Features : 
- no need of bool flag check mark
- no elements are popped out in largest or smallest in left or right part of arra



* Stability of Insertion sort : 
- only adjacent swaps are done just like bubble sort
- //*it is a stable sort.



*/
#include <bits/stdc++.h>
using namespace std;
void insertionsort(vector<int> &v)
{
    for (int idx = 1; idx < v.size(); idx++)
    {
        for (int j = idx - 1; j >= 0; j--) // as "i" is started from 1 so
        {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
            else
                break;
        }
    }
}

void insertsort(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        int j = i;
        while (v[j - 1] > v[j] && j >= 1) // as j-1 can go till zero i.e. j can go till 1 only
        {
            //*agr v[j-1]==v[j] bhi ho gya to bhi break ho ga
            swap(v[j - 1], v[j]);
            j--;
        }
    }
}
int main()
{
    vector<int> v = {3, 4, 5, 2, 1, 7, 8, 56, 1, -543, 177, -22, -4, 0};
    insertsort(v);
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";

    for (auto ele : v)
    {
        cout << ele << " ";
    }
}