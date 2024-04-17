#include <bits/stdc++.h>
using namespace std;
void removechar(string str, string res)
{
    char ch = str[0];
    if (str.empty())
    {
        cout << res;
        return;
    }
    if (ch == 'a')
    {
        removechar(str.substr(1), res);
    }
    else
        removechar(str.substr(1), res + ch);
}
int main()
{
    string str = "abcdabc abcd ab";
    string res = "";
    removechar(str, res);
}