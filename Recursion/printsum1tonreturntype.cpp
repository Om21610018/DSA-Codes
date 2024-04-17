#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if (n == 0) // Base condition
        return 0;
    int ans = n + sum(n - 1); // kaam+call
    return ans;                 // return
}
int main()
{
    int res = sum(10);
    cout << res;
}