//* Print subsets of a string with unique characters.
#include <bits/stdc++.h>
using namespace std;
/*
Subsets of a string :
 string str = "abc";

 subsets = { ,a,b,c,ab,bc,ac,abc} in sets ab==ba




*/

void printSubsets(string ans, string original)
{
    if (original.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = original[0];
    printSubsets(ans + ch, original.substr(1));
    printSubsets(ans, original.substr(1));
}

void printSubsets2(string ans, string original, int idx)
{
    if (idx == original.size())
    {
        cout << ans << endl;
        return;
    }
    char ch = original[idx];
    printSubsets2(ans + ch, original, idx + 1);
    printSubsets2(ans, original, idx + 1);
}
void printSubsetsandstore(string ans, string original, int idx, vector<string> &v)
{
    if (idx == original.size())
    {
        v.push_back(ans);
        return;
    }
    char ch = original[idx];
    printSubsetsandstore(ans + ch, original, idx + 1, v);
    printSubsetsandstore(ans, original, idx + 1, v);
}
int main()
{
    string str = "abc";
    string res = "";
    vector<string> v;
    printSubsets2(res, str, 0);
    printSubsetsandstore("", str, 0, v);
    for (auto i : v)
    {
        cout << i << " ";
    }
}