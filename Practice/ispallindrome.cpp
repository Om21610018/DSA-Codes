#include <bits/stdc++.h>
using namespace std;
bool isPallindrome(string str, int i, int j)
{
    if (i > j)
        return true;
    else if (str[i] != str[j])
        return false;
    else
        return isPallindrome(str, i + 1, j - 1);
}
int main()
{
    string str = "nama";
    cout << isPallindrome(str, 0, str.size() - 1);
}