#include <bits/stdc++.h>
using namespace std;

int power(int &base, int index)// as base is same in all the function calls
{
    if (index == 0 && base == 0)
    {
        cout << "Not Defined" << endl;
        return -1;
    }
    if (index == 0) // base case
        return 1;
    // if (index == 1)
    //     return base;
    int ans = base * power(base, index - 1); // kaam + call
    return ans;                              // return
}

int main()
{
    int base = 5;
    int index = 5;
    int res = power(base, index);
    cout << res;
}