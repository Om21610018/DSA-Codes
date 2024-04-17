/*
Given two strings s and t, return true if it is an
anagram of s, and false otherwise

s="abc" , t="cab"
if we make the string t by rearranging the characters of s then it is an anagram.

*/
#include <bits/stdc++.h>
using namespace std;
string isAnagram(string &s1, string &s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2)
        return "YES";
    else
        return "NO";
}
int main()
{
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    string res = isAnagram(str1, str2);
    cout << res;
}