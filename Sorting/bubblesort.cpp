/*
*Bubble sort :
arr = 5 3  1 4 2
To sort -> Put in ascending order
after sorting it becomes : 1 2 3 4 5


sort in decreasing order -> Put the elements in descending order

*Objservations :
- In each pass the nth max element goes to the right position

- If there are  'n' elements. then we require atmost 'n-1' passes to sort(i.e. in worst case)


*Algorithm :
- In each pass swap 2 adjacent elements if(arr[i]?arr[i+1])
- Iteration in each pass also reduces

*Time Complexity : O(n^2)
*Space Complexity : O(1)

*Time Complexity :
 Best Case : O(n)
 Average Case : O(n^2)
 Worst Case : O(n^2)





* Stable and Unstable sort :

arr -> 5  3  5'  1  2

after sorting -> 1  2  3  5  5' --> stable sort(as order of 5 and 5' is preserved)
after sortin  -> 1  2  3  5' 5  --> unstable sort
*So bubble sort is stable sort



* Maximum no. of swaps in bubble sort if array is of length n : n(n-1)/2

*/
#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &v)
{
    bool flag = true; // let us assume that array is sortd
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            flag = false;
            break;
        }
    }
    return flag;
}

void bubblesort3(vector<int> &v) // Optimized bubble sort
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < v.size() - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag = false; // it will check in current pass
            }
        }
        if (flag == true)
            break;
    }
}
void bubblesort2(vector<int> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
}
void bubblesort1(vector<int> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - 1; j++)
        {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
}
int main()
{
    vector<int> v(5);
    for (int i = 0; i < 5; i++)
        cin >> v[i];

    // sort(v.end(),v.begin()); it will be an error
    // sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());

    // bubblesort1(v);
    bool ans = isSorted(v);
    cout << ans << endl;
    bubblesort3(v);
    for (int i = 0; i < 5; i++)
        cout << v[i] << " ";
}