#include <bits/stdc++.h>
using namespace std;
bool solve(string str, int i, int j)
{
    if (i > j)
        return true;
    if (str[i] != str[j])
    {
        return false;
    }
    return solve(str, i + 1, j - 1);
}
bool isPallindrome(string str)
{
    return solve(str, 0, str.size() - 1);
}
int main()
{
    string str = "abcdcba";
    cout << isPallindrome(str);
}