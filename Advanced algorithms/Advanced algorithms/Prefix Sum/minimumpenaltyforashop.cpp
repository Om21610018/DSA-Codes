#include <bits/stdc++.h>
using namespace std;
/*





You are given the customer visit log of a shop represented by a 0-indexed string customers consisting only of characters 'N' and 'Y':

if the ith character is 'Y', it means that customers come at the ith hour
whereas 'N' indicates that no customers come at the ith hour.
If the shop closes at the jth hour (0 <= j <= n), the penalty is calculated as follows:

For every hour when the shop is open and no customers come, the penalty increases by 1.
For every hour when the shop is closed and customers come, the penalty increases by 1.
Return the earliest hour at which the shop must be closed to incur a minimum penalty.

Note that if a shop closes at the jth hour, it means the shop is closed at the hour j.



Example 1:

Input: customers = "YYNY"
Output: 2
Explanation:
- Closing the shop at the 0th hour incurs in 1+1+0+1 = 3 penalty.
- Closing the shop at the 1st hour incurs in 0+1+0+1 = 2 penalty.
- Closing the shop at the 2nd hour incurs in 0+0+0+1 = 1 penalty.
- Closing the shop at the 3rd hour incurs in 0+0+1+1 = 2 penalty.
- Closing the shop at the 4th hour incurs in 0+0+1+0 = 1 penalty.
Closing the shop at 2nd or 4th hour gives a minimum penalty. Since 2 is earlier, the optimal closing time is 2.
Example 2:

Input: customers = "NNNNN"
Output: 0
Explanation: It is best to close the shop at the 0th hour as no customers arrive.
Example 3:

Input: customers = "YYYY"
Output: 4
Explanation: It is best to close the shop at the 4th hour as customers arrive at each hour.

*/

int bestClosingtime(string customers)
{
    int n = customers.size();
    vector<int> pre(n + 1);
    vector<int> suf(n + 1);
    pre[0] = 0;
    for (int i = 0; i < n; i++)
        pre[i + 1] = pre[i] + ((customers[i] == 'N') ? 1 : 0);

    for (int i = 0; i < pre.size(); i++)
        cout << pre[i] << " ";
    cout << "" << endl;

    suf[n] = 0;
    for (int i = n - 1; i >= 0; i--)
        suf[i] = suf[i + 1] + ((customers[i] == 'Y') ? 1 : 0);

    for (int i = 0; i < suf.size(); i++)
        cout << suf[i] << " ";
    cout << "" << endl;

    for (int i = 0; i < pre.size(); i++)
    {
        pre[i] += suf[i];
    }

    int min = INT_MAX;
    int idx = -1;
    for (int i = 0; i < pre.size(); i++)
    {
        if (min > pre[i])
        {
            min = pre[i];
            idx = i;
        }
    }
    return idx;
}

int bestClosingTime(string customers)
{

    int n = customers.size();
    vector<int> pref(customers.size() + 1);
    for (int i = 0; i < customers.size(); i++)
    {

        if (i == 0)
            pref[i] = 0;
        else
        {
            int val = customers[i - 1] == 'N' ? 1 : 0;
            pref[i] = pref[i - 1] + val;
        }
    }
    pref[n] = pref[n - 1];

    // for (int i = 0; i < pref.size(); i++)
    //     cout << pref[i] << " ";
    // cout << "" << endl;

    int p = 0;
    for (int i = pref.size() - 1; i >= 0; i--)
    {
        if (i == pref.size() - 1)
            pref[i] += p;
        else
        {
            int val = customers[i] == 'Y' ? 1 : 0;
            p += val;
            pref[i] += p;
        }
    }
    // for (int i = 0; i < pref.size(); i++)
    //     cout << pref[i] << " ";
    // cout << "" << endl;
    int x = INT_MAX;
    int idx = -1;
    for (int i = 0; i < pref.size(); i++)
    {
        if (pref[i] < x)
        {
            idx = i;
            x = pref[i];
        }
    }
    return idx;
}
int main()
{
    string s = "YYNY";
    cout << bestClosingtime(s);
}