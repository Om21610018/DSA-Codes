#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Hello";
    reverse(str.begin(), str.begin() + 2);
    reverse(str.begin() + 2, str.end());
    reverse(str.begin(), str.end());
    cout << str << endl;

    string s = "hello";
    reverse(s.begin(), s.end() - 2);
    reverse(s.end() - 2, s.end());
    cout << s;
}