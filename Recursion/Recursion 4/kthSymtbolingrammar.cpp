#include <bits/stdc++.h>
using namespace std;

/*


We build a table of n rows (1-indexed). We start by writing 0 in the 1st row. Now in every subsequent row, we look at the previous row and replace each occurrence of 0 with 01, and each occurrence of 1 with 10.

For example, for n = 3, the 1st row is 0, the 2nd row is 01, and the 3rd row is 0110.
Given two integer n and k, return the kth (1-indexed) symbol in the nth row of a table of n rows.


Example 1:

Input: n = 1, k = 1
Output: 0
Example 2:

Input: n = 2, k = 1
Output: 0
Explanation:
row 1: 0
row 2: 01
Example 3:

Input: n = 2, k = 2
Output: 1
Explanation:
row 1: 0
row 2: 01


*/
void solve(int a, int n, vector<int> &ans)
{
    if (n == 1)
    {
        ans.push_back(a);
        return;
    }
    if (a == 0)
    {
        solve(0, n - 1, ans);
        solve(1, n - 1, ans);
    }
    else
    {
        solve(1, n - 1, ans);
        solve(0, n - 1, ans);
    }
}

int kthG(int n, int k)
{
    if (n == 1)
        return 0;
    if (k % 2 == 0)
    {
        // flip the answer and return it
        int prevAns = kthG(n - 1, k / 2);
        if (prevAns == 0)
            return 1;
        else
            return 0;
    }
    else
    {

        int prevAns = kthG(n - 1, (k / 2 + 1));
        return prevAns;
    }
}
int kthGrammar(int n, int k)
{
    vector<int> ans;
    solve(0, n, ans);
    return ans[k - 1];
}
int main()
{
    int n = 4;
    int k = 3;
    cout << kthG(n, k);
}