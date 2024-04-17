/*
input n strings and write a program to find
the longest common prefix string of all the strings.


strs = ["dog","racecar","car"];

* Sort this vector
* then check the first and last string's common prefix

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> strs = {"ab", "a"};
    sort(strs.begin(), strs.end());

    vector<string> strs1 = {};
    sort(strs1.begin(), strs1.end());

    // for (auto i : strs)
    //     cout << i << endl;

    // if(strs.size()==1)
    // return strs[0];
    int l = strs.size();
    string first = strs[0];
    string last = strs[l - 1];
    string res = "";
    int n = min(first.size(), last.size());
    for (int i = 0; i < n; i++)
    {
        if (first[i] == last[i])
            res.push_back(first[i]);
        else
            break;
    }
    cout << res;
}