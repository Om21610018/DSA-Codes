#include <bits/stdc++.h>
using namespace std;
// Generate paranthesis
/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.



Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]


'Well formed' means logical ho combination
*/
void solve(string str, int open, int close, int &n)
{

    if (open == n && close == n)
    {
        cout << str << endl;
        return;
    }
    // if (close > open) // no need it is covered in the following conditions
    //     return;
    if (open < n)
        solve(str + '(', open + 1, close, n);
    if (close < open)
        solve(str + ')', open, close + 1, n);
}
void generateParanthesis(int &n)
{
    solve("", 0, 0, n);
}
int main()
{
    int n = 3;
    generateParanthesis(n);
}