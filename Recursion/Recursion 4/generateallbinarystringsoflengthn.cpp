#include <bits/stdc++.h>
using namespace std;
// Generate all binary strings of length n without consecutive 1's

// Generating all binary strings
// void solve(string str, int n)
// {
//     if (n == 0)
//     {
//         cout << str << endl;
//         return;
//     }
//     solve(str + '0', n - 1);
//     solve(str + '1', n - 1);
// }
// void generateallbins(int n)
// {
//     solve("", n);
// }

void helper(string str, int n)
{
    if (n == 0)
    {
        cout << str << endl;
        return;
    }
    if (str == "")
    {
        helper(str + '0', n - 1);
        helper(str + '1', n - 1);
    }
    else if (str.back() != '1')
    {
        helper(str + '0', n - 1);
        helper(str + '1', n - 1);
    }
    else
    {
        helper(str + '0', n - 1);
    }
}
void generateallbinswithcons1(int n)
{
    helper("", n);
}
int main()
{
    int n = 2;
    // generateallbins(n);
    generateallbinswithcons1(n);
}